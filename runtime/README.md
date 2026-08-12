# MSR Native Runtime

Prototype JNI runtime used by the Dex2C protection pipeline.

## Components

- `java/native_library0/Loader.java`
- `cpp/runtime.h`
- `cpp/runtime.cpp`

The runtime currently provides:

- Native library loading
- JNI_OnLoad
- Native class registration entry point

The code generator will be connected in a later stage.
