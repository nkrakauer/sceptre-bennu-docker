/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_automatak_dnp3_impl_ManagerImpl */

#ifndef _Included_com_automatak_dnp3_impl_ManagerImpl
#define _Included_com_automatak_dnp3_impl_ManagerImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_automatak_dnp3_impl_ManagerImpl
 * Method:    create_native_manager
 * Signature: (ILcom/automatak/dnp3/LogHandler;)J
 */
JNIEXPORT jlong JNICALL Java_com_automatak_dnp3_impl_ManagerImpl_create_1native_1manager
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_automatak_dnp3_impl_ManagerImpl
 * Method:    shutdown_native_manager
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_automatak_dnp3_impl_ManagerImpl_shutdown_1native_1manager
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_automatak_dnp3_impl_ManagerImpl
 * Method:    get_native_channel_tcp_client
 * Signature: (JLjava/lang/String;IJJJLjava/util/List;Ljava/lang/String;Lcom/automatak/dnp3/ChannelListener;)J
 */
JNIEXPORT jlong JNICALL Java_com_automatak_dnp3_impl_ManagerImpl_get_1native_1channel_1tcp_1client
  (JNIEnv *, jobject, jlong, jstring, jint, jlong, jlong, jlong, jobject, jstring, jobject);

/*
 * Class:     com_automatak_dnp3_impl_ManagerImpl
 * Method:    get_native_channel_tcp_server
 * Signature: (JLjava/lang/String;IILcom/automatak/dnp3/IPEndpoint;Lcom/automatak/dnp3/ChannelListener;)J
 */
JNIEXPORT jlong JNICALL Java_com_automatak_dnp3_impl_ManagerImpl_get_1native_1channel_1tcp_1server
  (JNIEnv *, jobject, jlong, jstring, jint, jint, jobject, jobject);

/*
 * Class:     com_automatak_dnp3_impl_ManagerImpl
 * Method:    get_native_channel_udp
 * Signature: (JLjava/lang/String;IJJLcom/automatak/dnp3/IPEndpoint;Lcom/automatak/dnp3/IPEndpoint;Lcom/automatak/dnp3/ChannelListener;)J
 */
JNIEXPORT jlong JNICALL Java_com_automatak_dnp3_impl_ManagerImpl_get_1native_1channel_1udp
  (JNIEnv *, jobject, jlong, jstring, jint, jlong, jlong, jobject, jobject, jobject);

/*
 * Class:     com_automatak_dnp3_impl_ManagerImpl
 * Method:    get_native_channel_tls_client
 * Signature: (JLjava/lang/String;IJJJLjava/util/List;Ljava/lang/String;Lcom/automatak/dnp3/TLSConfig;Lcom/automatak/dnp3/ChannelListener;)J
 */
JNIEXPORT jlong JNICALL Java_com_automatak_dnp3_impl_ManagerImpl_get_1native_1channel_1tls_1client
  (JNIEnv *, jobject, jlong, jstring, jint, jlong, jlong, jlong, jobject, jstring, jobject, jobject);

/*
 * Class:     com_automatak_dnp3_impl_ManagerImpl
 * Method:    get_native_channel_tls_server
 * Signature: (JLjava/lang/String;IILcom/automatak/dnp3/IPEndpoint;Lcom/automatak/dnp3/TLSConfig;Lcom/automatak/dnp3/ChannelListener;)J
 */
JNIEXPORT jlong JNICALL Java_com_automatak_dnp3_impl_ManagerImpl_get_1native_1channel_1tls_1server
  (JNIEnv *, jobject, jlong, jstring, jint, jint, jobject, jobject, jobject);

/*
 * Class:     com_automatak_dnp3_impl_ManagerImpl
 * Method:    get_native_channel_serial
 * Signature: (JLjava/lang/String;IJJJLjava/lang/String;IIIIILcom/automatak/dnp3/ChannelListener;)J
 */
JNIEXPORT jlong JNICALL Java_com_automatak_dnp3_impl_ManagerImpl_get_1native_1channel_1serial
  (JNIEnv *, jobject, jlong, jstring, jint, jlong, jlong, jlong, jstring, jint, jint, jint, jint, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
