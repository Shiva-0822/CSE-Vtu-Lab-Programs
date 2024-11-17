//package mypack; not needed if both classes are in the same package.

class AA {
    void show() 
    {
        System.out.println("Hello RIT");
    }
}
public class Program10 
{
    public static void main(String args[]) 
    {
        AA a = new AA();
        a.show();  
    }
}