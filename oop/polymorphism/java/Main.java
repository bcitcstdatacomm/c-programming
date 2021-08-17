public class Main
{
    public static void main(final String[] argv)
    {
        Parent a;
        Parent b;

        a = new Child("abc", 1);
        b = new Child("def", 2);
        run(a);
        run(b);
    }

    private static void run(final Parent obj)
    {
        obj.sayHello();
    }
}
