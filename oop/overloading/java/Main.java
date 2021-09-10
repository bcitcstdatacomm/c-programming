public class Main
{
    public static void main(final String[] argv)
    {
        foo("Hello, World!");
        foo(10);
        foo(123.4f);
    }

    private static void foo(int value)
    {
        System.out.printf("int: %d%n", value);
    }

    private static void foo(float value)
    {
        System.out.printf("float: %f%n", value);
    }

    private static void foo(String value)
    {
        System.out.printf("string: %s%n", value);
    }
}
