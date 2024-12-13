 
class MyPoint 
{
    int x;
    int y;
    myPoint() 
    {
        x = 0;
        y = 0;
    }
    myPoint(int a, int b) 
    {
        x = a;
        y = b;
    }
    void setXY(int a, int b) 
    {
        x = a;
        y = b;
    }
    int[] getXY() 
    {
        int coordinates[] = {x, y}; 
        return coordinates;    
    }
    
    public String toString() 
    {
        return "(" + x + ", " + y + ")";
    }
    
    
double distance(int a, int b) 
    {
        int  m = x - a;
        int  n = y - b;
        return Math.sqrt(m * m + n * n);
    }
    double distance(MyPoint another) 
    {
        int m = x - another.x;
        int n = y - another.y;
        return Math.sqrt(m * m + n * n);
    }
    double distance() 
    {
        return Math.sqrt(x * x + y * y);
    }
}

public class TestMyPoint 
{
   	 public static void main(String args[]) 
{
        		MyPoint p1 = new MyPoint();  
        		MyPoint p2 = new MyPoint(3, 4);  
       		p1.setXY(5, 6);
        		System.out.println("Updated Point1: " + p1); 
        		System.out.println("Distance from Point1 to Point2: " + p1.distance(p2));
        		System.out.println("Distance from Point1 to (7, 8): " + p1.distance(7, 8));
        		System.out.println("Distance from Point2 to origin: " + p1.distance());
    	}
}