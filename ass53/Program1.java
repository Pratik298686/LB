/*
1. Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements. 
Input :  N :   6 
  Elements : 85 66 3 80 93 88  
Output : 53 (234 - 181)
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    int Even(int arr[])
    {
        int iSum1 = 0,iSum2 = 0;
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i]%2==0)
            {
               iSum1 = iSum1 + arr[i];
            }
            else
            {
               iSum2 = iSum2 + arr[i];
            }
        }
        return (iSum1-iSum2);
    }
}
class Program1 
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
        int bret = dobj.Even(arr);
        System.out.println("Even is : " +bret);
    }
}
