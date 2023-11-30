
class Demo extends Thread
{
   public void run()     // Running state
   {  
      String name = Thread.currentThread().getName();
      System.out.println("current thread is :"+name);
      for(int i = 1; i < 1000; i++)
      {
          System.out.println("current thread is : "+Thread.currentThread().getName());
      }
   }
}

class Multi3
{
    public static void main(String Arg[])
    {
       System.out.println("current thread is : "+Thread.currentThread().getName());

       Demo obj1 = new Demo(); // new state
       Demo obj2 = new Demo(); // new state

       obj1.setName("First_Thread");
       obj1.setName("Second_Thread");

       obj1.start();  // Runnable state
       obj2.start();  // Runnable state

      // System.out.println("Thread goes to dead state");  // Dead state

    }
}