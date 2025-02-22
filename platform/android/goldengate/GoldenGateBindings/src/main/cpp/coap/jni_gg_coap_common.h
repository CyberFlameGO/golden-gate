// Copyright 2017-2020 Fitbit, Inc
// SPDX-License-Identifier: Apache-2.0

#include <jni.h>
#include <xp/coap/gg_coap.h>

#ifndef JNI_GG_COAP_COMMON_H
#define JNI_GG_COAP_COMMON_H

extern "C" {

// class names
#define JAVA_OBJECT_CLASS_NAME "java/lang/Object"
#define JAVA_LIST_CLASS_NAME "java/util/List"
#define JAVA_STRING_CLASS_NAME "java/lang/String"
#define JAVA_LINKED_LIST_CLASS_NAME "java/util/LinkedList"
#define COAP_BASE_REQUEST_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/BaseRequest"
#define COAP_BASE_RESPONSE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/BaseResponse"
#define COAP_OUTGOING_REQUEST_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/OutgoingRequest"
#define COAP_OUTGOING_RESPONSE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/OutgoingResponse"
#define COAP_MESSAGE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/Message"
#define COAP_OUTGOING_MESSAGE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/OutgoingMessage"
#define COAP_OUTGOING_BODY_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/OutgoingBody"
#define COAP_EMPTY_OUTGOING_BODY_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/EmptyOutgoingBody"
#define COAP_BYTE_ARRAY_OUTGOING_BODY_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/BytesArrayOutgoingBody"
#define COAP_METHOD_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/Method"
#define COAP_RESPONSE_LISTENER_CLASS_NAME "com/fitbit/goldengate/bindings/coap/CoapResponseListener"
#define COAP_RESPONSE_CODE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/ResponseCode"
#define COAP_RAW_REQUEST_MESSAGE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/RawRequestMessage"
#define COAP_RAW_RESPONSE_MESSAGE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/RawResponseMessage"
#define COAP_RESPONSE_HANDLER_CLASS_NAME "com/fitbit/goldengate/bindings/coap/handler/ResourceHandler"
#define COAP_RESPONSE_HANDLER_INVOKER_CLASS_NAME "com/fitbit/goldengate/bindings/coap/handler/ResourceHandlerInvoker"
#define COAP_ADD_RESOURCE_HANDLER_RESULT_CLASS_NAME \
    "com/fitbit/goldengate/bindings/coap/CoapEndpoint$AddResourceHandlerResult"
#define COAP_RESPONSE_FOR_RESULT_CLASS_NAME \
    "com/fitbit/goldengate/bindings/coap/CoapEndpoint$ResponseForResult"
#define COAP_OPTIONS_BUILDER_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/OptionsBuilder"
#define COAP_OPTION_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/Option"
#define COAP_OPTION_NUMBER_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/OptionNumber"
#define COAP_OPTION_VALUE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/OptionValue"
#define COAP_INT_OPTION_VALUE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/IntOptionValue"
#define COAP_STRING_OPTION_VALUE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/StringOptionValue"
#define COAP_OPAQUE_OPTION_VALUE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/OpaqueOptionValue"
#define COAP_EMPTY_OPTION_VALUE_CLASS_NAME "com/fitbit/goldengate/bindings/coap/data/EmptyOptionValue"

// method names
#define CONSTRUCTOR_NAME "<init>"
#define JAVA_LIST_GET_NAME "get"
#define JAVA_LIST_SIZE_NAME "size"
#define COAP_GET_VALUE_NAME "getValue"
#define COAP_REQUEST_GET_METHOD_NAME "getMethod"
#define COAP_OUTGOING_MESSAGE_GET_BODY_NAME "getBody"
#define COAP_MESSAGE_GET_OPTIONS_NAME "getOptions"
#define COAP_REQUEST_GET_ACK_TIMEOUT_NAME "getAckTimeout"
#define COAP_REQUEST_GET_MAX_RESEND_COUNT_NAME "getMaxResendCount"
#define COAP_OUTGOING_BODY_GET_DATA_NAME "getData"
#define COAP_METHOD_FROM_VALUE_NAME "fromValue"
#define COAP_RESPONSE_GET_AUTOGENERATE_BLOCKWISE_CONFIG_NAME "getAutogenerateBlockwiseConfig"
#define COAP_RESPONSE_LISTENER_ON_ACK_NAME "onAck"
#define COAP_RESPONSE_LISTENER_ON_ERROR_NAME "onError"
#define COAP_RESPONSE_LISTENER_ON_NEXT_NAME "onNext"
#define COAP_RESPONSE_LISTENER_ON_COMPLETE_NAME "onComplete"
#define COAP_RESPONSE_GET_RESPONSE_CODE_NAME "getResponseCode"
#define COAP_RESPONSE_CODE_GET_RESPONSE_CLASS_NAME "getResponseClass"
#define COAP_RESPONSE_CODE_GET_DETAIL_NAME "getDetail"
#define COAP_RESPONSE_HANDLER_INVOKER_INVOKE_NAME "invoke"
#define COAP_OPTIONS_BUILDER_OPTION_NAME "option"
#define COAP_OPTIONS_BUILDER_BUILD_NAME "build"
#define COAP_OPTION_GET_NUMBER_NAME "getNumber"

// method signature
#define DEFAULT_CONSTRUCTOR_SIG "()V"
#define JAVA_LIST_GET_SIG "(I)L" JAVA_OBJECT_CLASS_NAME ";"
#define JAVA_LIST_SIZE_SIG "()I"
#define COAP_REQUEST_GET_METHOD_SIG "()L" COAP_METHOD_CLASS_NAME ";"
#define COAP_REQUEST_GET_ACK_TIMEOUT_SIG "()I"
#define COAP_REQUEST_GET_MAX_RESEND_COUNT_SIG "()I"
#define COAP_OUTGOING_MESSAGE_GET_BODY_SIG "()L" COAP_OUTGOING_BODY_CLASS_NAME ";"
#define COAP_MESSAGE_GET_OPTIONS_SIG "()L" JAVA_LINKED_LIST_CLASS_NAME ";"
#define COAP_BYTE_ARRAY_OUTGOING_BODY_GET_DATA_SIG "()[B"
#define COAP_METHOD_GET_VALUE_SIG "()B"
#define COAP_METHOD_FROM_VALUE_SIG "(B)L" COAP_METHOD_CLASS_NAME ";"
#define COAP_RESPONSE_GET_FORCE_NONBLOCKWISE_SIG "()Z"
#define COAP_RESPONSE_LISTENER_ON_ACK_SIG "()V"
#define COAP_RESPONSE_LISTENER_ON_ERROR_SIG "(IL" JAVA_STRING_CLASS_NAME ";)V"
#define COAP_RESPONSE_LISTENER_ON_NEXT_SIG "(L" COAP_RAW_RESPONSE_MESSAGE_CLASS_NAME ";)V"
#define COAP_RESPONSE_LISTENER_ON_COMPLETE_SIG "()V"
#define COAP_RESPONSE_CODE_CONSTRUCTOR_SIG "(BB)V"
#define COAP_RAW_REQUEST_MESSAGE_CONSTRUCTOR_SIG \
    "(L" COAP_METHOD_CLASS_NAME ";L" JAVA_LINKED_LIST_CLASS_NAME ";[B)V"
#define COAP_RAW_RESPONSE_MESSAGE_CONSTRUCTOR_SIG \
    "(L" COAP_RESPONSE_CODE_CLASS_NAME ";L" JAVA_LINKED_LIST_CLASS_NAME ";[B)V"
#define COAP_RESPONSE_GET_RESPONSE_CODE_SIG "()L" COAP_RESPONSE_CODE_CLASS_NAME ";"
#define COAP_RESPONSE_CODE_GET_RESPONSE_CLASS_SIG "()B"
#define COAP_RESPONSE_CODE_GET_DETAIL_SIG "()B"
#define COAP_RESPONSE_HANDLER_INVOKER_CONSTRUCTOR_SIG "(L" COAP_RESPONSE_HANDLER_CLASS_NAME ";)V"
#define COAP_RESPONSE_HANDLER_INVOKER_INVOKE_SIG \
    "(L" COAP_RAW_REQUEST_MESSAGE_CLASS_NAME ";)L" COAP_OUTGOING_RESPONSE_CLASS_NAME ";"
#define COAP_ADD_RESOURCE_HANDLER_RESULT_CONSTRUCTOR_SIG "(IJ)V"
#define COAP_RESPONSE_FOR_RESULT_CONSTRUCTOR_SIG "(IJ)V"
#define COAP_OPTIONS_GET_VALUE_SIG "()S"
#define COAP_OPTIONS_BUILDER_BUILD_SIG "()L" JAVA_LINKED_LIST_CLASS_NAME ";"
#define COAP_OPTIONS_BUILDER_OPTION_EMPTY_SIG "(S)V"
#define COAP_OPTIONS_BUILDER_OPTION_INT_SIG "(SI)V"
#define COAP_OPTIONS_BUILDER_OPTION_STRING_SIG "(SL" JAVA_STRING_CLASS_NAME ";)V"
#define COAP_OPTIONS_BUILDER_OPTION_OPAQUE_SIG "(S[B)V"
#define COAP_OPTION_GET_NUMBER_SIG "()L" COAP_OPTION_NUMBER_CLASS_NAME ";"
#define COAP_OPTION_GET_VALUE_SIG "()L" COAP_OPTION_VALUE_CLASS_NAME ";"
#define COAP_INT_OPTION_GET_VALUE_SIG "()I"
#define COAP_STRING_OPTION_GET_VALUE_SIG "()L" JAVA_STRING_CLASS_NAME ";"
#define COAP_OPAQUE_OPTION_GET_VALUE_SIG "()[B"

/**
 * Get the coap method requested from request message
 *
 * @param request object containing coap request message
 * @return coap method
 */
GG_CoapMethod CoapEndpoint_GG_CoapMethod_From_Request_Object(JNIEnv *env, jobject request);

/**
 * Get payload byte array from outgoing coap message
 *
 * TODO: FC-1303  Read data from stream/ByteArray (Currently this assumes body is ByteArray).
 * TODO: Probably by moving which stream to choose and getting bytes logic to kotlin code
 *
 * @param message object containing coap request message
 * @return coap payload byte array. This reference should be deleted after its send to native layer
 */
jbyteArray CoapEndpoint_Body_ByteArray_From_OutgoingMessage_Object(jobject outgoing_message_object);

/**
 * Get options size from coap request message
 *
 * @param message object containing coap request message
 * @return count of number of options in request
 */
unsigned int CoapEndpoint_OptionSize_From_Message_Object(JNIEnv *env, jobject message);

/**
 * Get options param from coap request message.
 *
 * Caller should CoapEndpoint_ReleaseOptionParam to release any memory once done with
 * GG_CoapMessageOptionParam usage.
 *
 * @param message object containing coap request message
 * @param options reference to options param options will be returned on
 * @param options_count count of number of options in request
 */
void CoapEndpoint_GG_CoapMessageOptionParam_From_Message_Object(
        JNIEnv *env,
        jobject message,
        GG_CoapMessageOptionParam *options,
        unsigned int options_count
);

/**
 * Get the coap max resend count value from request message
 *
 * @param request object containing coap request message
 * @return max resend count number
 */
jint CoapEndpoint_GG_CoapMaxResendCount_From_Request_Object(JNIEnv *env, jobject request);

/**
 * Get the coap ack timeout value from request message
 *
 * @param request object containing coap request message
 * @return max resend count number
 */
jint CoapEndpoint_GG_CoapAckTimeout_From_Request_Object(JNIEnv *env, jobject request);

/**
 * Method to release any object associated with GG_CoapMessageOptionParam
 *
 * @param options reference to array data with to options param
 * @param options_count count of number of options
 */
void CoapEndpoint_ReleaseOptionParam(
        GG_CoapMessageOptionParam *options,
        unsigned int options_count
);

/**
 * Get body/payload from GG_CoapMessage
 *
 * @param message coap message
 * @return jni byte array
 */
static jbyteArray CoapEndpoint_Body_BytesArray_From_GG_CoapMessage(const GG_CoapMessage *message);

/**
 * Create [RawRequest] object from GG_CoapMessage
 *
 * @param request single or blockwise coap request message
 * @return new instance of kotlin [RawRequest]
 */
jobject CoapEndpoint_RawRequestMessage_Object_From_GG_CoapMessage(
        const GG_CoapMessage *request
);

/**
 * Create [RawResponse] object from GG_CoapMessage
 *
 * @param response single or blockwise coap response message
 * @return new instance of kotlin [RawResponse]
 */
jobject CoapEndpoint_RawResponseMessage_Object_From_GG_CoapMessage(
        GG_CoapMessage *response
);

/**
 * Get response code value from [ResponseCode] object
 *
 * @param response [ResponseCode] object
 * @return uint8_t response code value
 */
uint8_t CoapEndpoint_ResponseCode_From_Response_Object(jobject response);

/**
 * Get AutogenerateBlockwiseConfig flag from [ResponseCode] object
 *
 * @param response [ResponseCode] object
 * @return jboolean true if autogenerated blockwise response is desired
 */
jboolean CoapEndpoint_AutogenerateBlockwiseConfig_From_Response_Object(jobject response);

/**
 * Create [Options] object from given GG_CoapMessage
 *
 * @param response coap message
 * @return new instance of [Options] object
 */
jobject CoapEndpoint_Option_Object_From_GG_CoapMessage(const GG_CoapMessage *response);

/**
 * Create a [jstring] object from given optionally non-null terminated string.
 *
 * Note: Caller is responsible for removing returned [jstring] if its *non-null*
 *
 * @param source pointer to the memory location to copy from
 * @param count number of bytes to copy
 * @return non-null [jstring]
 */
jstring Jstring_From_NonNull_Terminated_String(
        JNIEnv *env,
        const char * source,
        size_t count
);

}
#endif // JNI_GG_COAP_COMMON_H
