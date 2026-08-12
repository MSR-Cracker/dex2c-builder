package native_library0;

public final class Loader {

    static {
        System.loadLibrary("native_library");
    }

    private Loader() {
    }

    public static native void registerNativesForClass(
            int classId,
            Class<?> clazz
    );
}
