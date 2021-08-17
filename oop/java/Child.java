public class Child
    extends Parent
{
    private int value;

    protected Child(final String s, final int val)
    {
        super(s);

        value = val;
    }

    public void sayHello()
    {
        System.out.printf("%s %d%n", str, value);
    }
}
