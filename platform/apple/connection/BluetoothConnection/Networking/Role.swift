//
//  Role.swift
//  GoldenGate
//
//  Created by Marcel Jackwerth on 1/8/18.
//  Copyright © 2018 Fitbit. All rights reserved.
//

import Foundation

// TODO: This entire class can go away once the Link layer is made symmetrical in regards to open and reset events.
public enum Role: String, Codable {
    // This device will subscribe to the peer's Link service.
    case node

    // The peer will subscribe to this device's the Link service.
    case hub
}
