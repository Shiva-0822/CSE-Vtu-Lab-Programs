interface Resizable 
{
    //by Hassassin
    void resizeWidth(int width);
    void resizeHeight(int height);
}

class Rectangle implements Resizable 
{
    int width = 10;
    int height = 20;
    public void resizeWidth(int newWidth) {
        width = newWidth;
    }
    public void resizeHeight(int newHeight) 
    {
        height = newHeight;
    }
}

public class Program7 
{
    public static void main(String[] args) 
    {
        Rectangle R = new Rectangle();

        System.out.println("Original Dimensions:");
        System.out.println("Width = " + R.width);
        System.out.println("Height = " + R.height);

        R.resizeWidth(30);
        R.resizeHeight(40);

        System.out.println("Resized Dimensions:");
        System.out.println("Resized Width = " + R.width);
        System.out.println("Resized Height = " + R.height);
    }
}