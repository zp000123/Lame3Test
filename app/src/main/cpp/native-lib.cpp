#include <jni.h>
#include <string>
#include "lame/lame.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_lame3test2_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(get_lame_version());
}
