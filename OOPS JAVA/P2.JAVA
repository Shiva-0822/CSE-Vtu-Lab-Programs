import java.util.Scanner;
class Employee 
{
    String name;
    int id;
    float salary;
    float raiseSalary(float percent) 
    {
        return salary + (salary * (percent / 100));
    }
}

public class  Program3
{
    public static void main(String[] args) 
    {
        Employee e = new Employee();
        Scanner sc = new Scanner(System.in);
        e.name = "MNS";
        e.id = 1;
        e.salary = 90000;
        System.out.println("Enter the percentage of increment:");
        float percent = sc.nextFloat();
        System.out.println("Salary after increment: " + e.raiseSalary(percent));
        sc.close();
    }
}
