public class Main
{
    public static void main(final String[] argv)
    {
        Clazz a;
        Clazz b;

        a = new Clazz(5);
        b = new Clazz(6);
        System.out.printf("%d%n", a.getValue());
        System.out.printf("%d%n", b.getValue());

        a.setValue(10);
        b.setValue(20);
        System.out.printf("%d%n", a.getValue());
        System.out.printf("%d%n", b.getValue());
    }
}
