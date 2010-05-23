/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intervigil_micdroid_AutoTalent */

#ifndef _Included_com_intervigil_micdroid_AutoTalent
#define _Included_com_intervigil_micdroid_AutoTalent
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    instantiateAutoTalent
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroid_AutoTalent_instantiateAutoTalent
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    initializeAutoTalent
 * Signature: (FCFFFFFFFFFFIIFF)V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroid_AutoTalent_initializeAutoTalent
  (JNIEnv *, jclass, jfloat, jchar, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jint, jint, jfloat, jfloat);

/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    processSamples
 * Signature: ([S)V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroid_AutoTalent_processSamples
  (JNIEnv *, jclass, jshortArray);

/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    destroyAutoTalent
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroid_AutoTalent_destroyAutoTalent
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
