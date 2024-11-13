import java.util.Scanner;
//by Hassassin
class Program1
{
    public static void main(String args[]) 
    {
        int n=Integer.parseInt(args[0]); //Pass arguments while compiling ex: java Program1.java 2
        int i,j;
        int A[][]=new int[n][n]; 
        int B[][]=new int[n][n]; 
        int C[][]=new int[n][n]; 
        Scanner sc=new Scanner(System.in); 
        System.out.println("Enter the elements in to Matrix A:"); 
        for(i=0;i<n;i++) 
        { 
            for(j=0;j<n;j++) 
            {
                A[i][j]=sc.nextInt(); 
            } 
        }    
        System.out.println("Enter the elements in to Matrix B:"); 
        for(i=0;i<n;i++) 
        { 
            for(j=0;j<n;j++) 
            {
                B[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<n;i++) 
        { 
            for(j=0;j<n;j++) 
            {
                C[i][j]=A[i][j]+B[i][j]; 
            }  
        }
        System.out.println("Elements of matrix C:"); 
        for(i=0;i<n;i++)
        { 
            for(j=0;j<n;j++) 
            { 
                System.out.print(" "+C[i][j]);
            }
        }
        System.out.println();
    }
}