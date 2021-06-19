/*
5. Write Java program which accept N numbers from user and display all such elements which are multiples of 11. 
Input :  N :   6 
  Elements : 85 66 3 55 93 88  
Output : 66 55 88
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    void Even(int arr[])
    {
        int iSum1 = 0;
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i]%11==0)
            {
               
               System.out.println("Divisible 5 is : " +arr[i]);
            }   
        }
    }
}
class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Element");
        int size = sobj.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the Array elements");
        for(int i=0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        } 
        ArrayDemo dobj = new ArrayDemo();
        dobj.Even(arr);
    }
}