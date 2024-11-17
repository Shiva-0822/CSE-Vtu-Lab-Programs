class Outer 
{
    void display() 
    {
        System.out.println("I am outer class display");
        class Inner 
        {
            void display() 
            {
                System.out.println("I am inner class display");
            }
        }
        Inner innerObj = new Inner();
        innerObj.display();
    }
}
public class Program8 
{
    public static void main(String[] args) 
    {
        Outer oo = new Outer();
        oo.display();
    }
}