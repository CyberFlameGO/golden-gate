// Copyright 2017-2020 Fitbit, Inc
// SPDX-License-Identifier: Apache-2.0

package com.fitbit.bluetooth.fbgatt.rx.client

import com.fitbit.bluetooth.fbgatt.rx.GattServiceNotFoundException
import com.fitbit.bluetooth.fbgatt.rx.getGattCharacteristic
import io.reactivex.Completable
import io.reactivex.Single
import timber.log.Timber
import java.util.UUID

/**
 * Helper to subscribe to GATT characteristic on CONNECTED peer (remote) device
 */
class PeerGattServiceSubscriber {

    /**
     * Subscribe to given characteristic hosted on remote device
     *
     * @param peer connected peer device
     * @param serviceUuid GATT service hosting the characteristic to subscribe to
     * @param characteristicUUID GATT characteristic to subscribe to
     * @param isIndication whether the notification type is indication (by default, it's set to notification)
     * @throws [GattServiceNotFoundException] if given service is not found
     */
    fun subscribe(
        peer: BitGattPeer,
        serviceUuid: UUID,
        characteristicUUID: UUID,
        isIndication: Boolean = false
    ): Completable {
        return peer.getService(serviceUuid)
            .toSingle()
            .onErrorResumeNext { Single.error(GattServiceNotFoundException(serviceUuid)) }
            .flatMap { service -> service.getGattCharacteristic(characteristicUUID) }
            .flatMap { characteristic -> peer.setupNotifications(characteristic, true, isIndication) }
            .doOnSuccess { Timber.d("Successfully subscribed to $characteristicUUID") }
            .doOnError { Timber.e(it, "Failed to subscribe to $characteristicUUID") }
            .ignoreElement()
    }

}
