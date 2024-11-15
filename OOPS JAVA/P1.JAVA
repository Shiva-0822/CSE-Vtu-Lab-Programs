public class Program2 
{
    int top = -1, capacity = 10;
    int a[] = new int[capacity];

    void push(int x) 
    {
        if (top == capacity - 1) 
        {
            System.out.println("STACK OVERFLOW");
            System.exit(1);
        }
        System.out.println("Inserted element = " + x);
        a[++top] = x;
    }

    int pop() 
    {
        if (top == -1) 
        {
            System.out.println("STACK EMPTY");
            System.exit(1);
        }
        return a[top--];
    }

    public static void main(String args[]) 
    {
        Program2 s = new Program2();
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60);
        System.out.println("Popped element is " + s.pop());
        System.out.println("Popped element is " + s.pop());
        System.out.println("Remaining stack elements:");
        for (int i = 0; i <= s.top; i++) 
        {
            System.out.println(s.a[i]);
        }
    }
}
