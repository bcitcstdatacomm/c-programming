public class Child
    extends Parent
{
    public int value;

    protected Child(final String s, final int val)
    {
        super(s);

        value = val;
    }
}
