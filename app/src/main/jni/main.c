/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <android/log.h>

#ifndef LOG_TAG
#define LOG_TAG "ANDROID_LAB"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#endif

/* Header for class cn_edu_sjzc_fanyafeng_jni_MainActivity*/

#ifndef _Included_cn_edu_sjzc_fanyafeng_jni_MainActivity
#define _Included_cn_edu_sjzc_fanyafeng_jni_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class: cn_edu_sjzc_fanyafeng_jni_MainActivity
 * Method: getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_edu_sjzc_fanyafeng_jni_MainActivity_getStringFromNative
  (JNIEnv * env, jobject jObj){
      LOGE("log string from ndk.");
      return (*env)->NewStringUTF(env,"cn.edu.sjzc.fanyafeng JNI!");
  }

#ifdef __cplusplus
}
#endif
#endif