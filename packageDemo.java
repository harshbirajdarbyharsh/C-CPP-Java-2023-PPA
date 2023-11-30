import Marvellous.Maths;

class packageDemo
{
    public static void main(String arg[])
    {
        Maths mobj = new Maths();
        int iRet = 0;
        iRet = mobj.Addition(10,11);
        System.out.println("Additionis : ",+iRet);
    }
}