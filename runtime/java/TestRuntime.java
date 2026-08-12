package native_library0;

public final class TestRuntime {

    private TestRuntime() {
    }

    public static void test() {
        Loader.registerNativesForClass(
                0,
                TestRuntime.class
        );
    }
}
