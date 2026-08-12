#include "runtime.h"

#include <jni.h>

namespace {

JavaVM* g_vm = nullptr;

}

namespace msr_runtime {

bool register_class(
    JNIEnv* env,
    jint class_id,
    jclass clazz
) {
    /*
     * Prototype runtime.
     *
     * class_id identifies the generated native class.
     *
     * The actual native methods will be registered by
     * the code generator in the next stage.
     */

    (void)env;
    (void)class_id;
    (void)clazz;

    return true;
}

}

extern "C"
JNIEXPORT void JNICALL
Java_native_1library0_Loader_registerNativesForClass(
        JNIEnv* env,
        jclass,
        jint class_id,
        jclass target_class) {

    msr_runtime::register_class(
        env,
        class_id,
        target_class
    );
}

extern "C"
JNIEXPORT jint JNICALL
JNI_OnLoad(
        JavaVM* vm,
        void*) {

    g_vm = vm;

    return JNI_VERSION_1_6;
}
