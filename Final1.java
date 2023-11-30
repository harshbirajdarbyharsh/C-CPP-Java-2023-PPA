
class Demo
{
    public int A;
    public final int B = 21;
    Demo()
    {
        A = 11;
    }

}
class Final1
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();
        dobj.A++;
        dobj.B++;
    }
}