class MyThread extends Thread 
{
    public MyThread(String name) 
    {
        super(name);
    }
    public void run () 
    {
        for (int i = 1; i <= 5; i++) 
        {
            System.out.println(getName() + ": Count " + i);
            try
            {
                Thread.sleep(500);
            } catch (InterruptedException e)  
            {
                System.out.println(getName() + " interrupted.");
            }
        }
    }
}
public class Program12 
{
    public static void main(String[] args)                                                    
    {
        System.out.println("Main thread started: " + Thread.currentThread().getName());
        MyThread thread1 = new MyThread("Child Thread 1");
        MyThread thread2 = new MyThread("Child Thread 2");
        thread1.start();
        thread2.start();
        for (int i = 1; i <= 5; i++) 
        {
            System.out.println("Main thread: Count " + i);
            try
            {
                Thread.sleep(500);
            } catch (InterruptedException e) 
            {
                System.out.println("Main thread interrupted.");
            }
        }
        System.out.println("Main thread ended: " + Thread.currentThread().getName());
    }
}