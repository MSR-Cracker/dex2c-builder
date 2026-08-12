LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := msr

LOCAL_SRC_FILES := \
    ../cpp/runtime.cpp

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../cpp

LOCAL_CPPFLAGS := \
    -std=c++17 \
    -fvisibility=hidden

LOCAL_LDLIBS := \
    -llog

include $(BUILD_SHARED_LIBRARY)
