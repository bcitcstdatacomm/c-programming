public class Main
{
    public static void main(final String[] argv)
    {
        Parent a;
        Child  b;

        a = new Parent();
        b = new Child();

        a.str   = "Hello";
        b.str   = "World";
        b.value = 42;

        System.out.printf("a: %s%n", a.str);
        System.out.printf("b: %s %d%n", b.str, b.value);
    }
}
