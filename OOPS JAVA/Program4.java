class MyPoint 
{
    private int x;
    private int y;
    public MyPoint() 
    {
        this.x = 0;
        this.y = 0;
    }
    public MyPoint(int x, int y) 
    {
        this.x = x;
        this.y = y;
    }
    public void setXY(int x, int y) 
    {
        this.x = x;
        this.y = y;
    }
    public int[] getXY() 
    {
        return new int[]{x, y};
    }
    @Override
    public String toString() 
    {
        return "(" + x + ", " + y + ")";
    }
    public double distance(int x, int y) 
    {
        int dx = this.x - x;
        int dy = this.y - y;
        return Math.sqrt(dx * dx + dy * dy);
    }
    public double distance(MyPoint another) 
    {
        return distance(another.x, another.y);
    }
    public double distance() 
    {
        return distance(0, 0);
    }
}
public class Program4 
{
    public static void main(String[] args) 
    {
        MyPoint point1 = new MyPoint(); 
        MyPoint point2 = new MyPoint(3, 4); 
        point1.setXY(1, 2);
        System.out.println("Point 1 coordinates: " + point1.toString());
        double distance1 = point1.distance(point2);
        double distance2 = point1.distance(); 
        System.out.println("Distance between Point 1 and Point 2: " + distance1);
        System.out.println("Distance between Point 1 and the origin: " + distance2);
    }
}