class Demo implements Runnable 
{
    public void run() 
    {
        try 
        {
            System.out.println("Thread started: " + Thread.currentThread().getName());
            Thread.sleep(500);
            System.out.println("Thread ended: " + Thread.currentThread().getName());
        } catch (InterruptedException e) 
        {
            System.out.println("Thread interrupted: " + Thread.currentThread().getName());
        }
    }
}

public class Program11 
{
    public static void main(String[] args) 
    {
        System.out.println("Main thread starts: " + Thread.currentThread().getName());
        Thread thread1 = new Thread(new Demo());
        Thread thread2 = new Thread(new Demo());
        thread1.start();
        thread2.start();
        try 
        {
            thread1.join();
            thread2.join();
        } catch (InterruptedException e) 
        {
            System.out.println("Main thread interrupted.");
        }
        System.out.println("Main thread ends: " + Thread.currentThread().getName());
    }
}