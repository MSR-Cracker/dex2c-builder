#ifndef MSR_NATIVE_RUNTIME_H
#define MSR_NATIVE_RUNTIME_H

#include <jni.h>

namespace msr_runtime {

bool register_class(
    JNIEnv* env,
    jint class_id,
    jclass clazz
);

}

#endif
