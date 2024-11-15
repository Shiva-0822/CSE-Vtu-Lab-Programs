import java.util.*;
class A extends Exception 
{
    A(String msg) 
    {
        super(msg);
    }
}

public class Program9
{
    public static void main(String args[]) 
    {
        try 
        {
            int a = 10, b = 0, c;
            if (b == 0) 
            {
                throw new A("Division by zero is not allowed.");
            }
            c = a / b;
            System.out.println(c);
        } 
        catch (Exception e) 
        {
            System.out.println(e);  
        } finally 
        {
            System.out.println("Finally block executed.");
        }
    }
}
