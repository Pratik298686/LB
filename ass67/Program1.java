/*
1. Write a java program which accept two arrays from user and return difference between summation of arrays. 
Input :  2 9 7 5 2 3   9 3 5 5 
Output : 6
*/
import java.lang.*;
import java.util.*;
class MyArray
{
    void Display(int arr[],int brr[])
    {
        int sum1 = 0,sum2 = 0;
        for( int i = 0; i<arr.length; i++)
		{
            sum1 = sum1+arr[i];
            
        }
        System.out.println("first array summation is : "+sum1);
        System.out.println("");
        for( int j = 0; j<brr.length; j++)
		{
          sum2 = sum2+brr[j];  
        }
        System.out.println("second array summation is : "+sum2); 

        System.out.println("difference of summation is : "+(sum1-sum2));
    }
}

class Program1
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of first array");
		int no1 = sobj.nextInt();

		System.out.println("Enter number of second array");
        int no2 = sobj.nextInt();

        int arr[] = new int[no1];
        int brr[] = new int[no2];

		System.out.println("Enter the first array");

		for( int i = 0; i<arr.length; i++)
		{
			arr[i]= sobj.nextInt();
        }
        System.out.println("Enter the second array");
        for( int j = 0; j<brr.length; j++)
		{
			brr[j]= sobj.nextInt();
        }
        MyArray dobj = new MyArray();
        dobj.Display(arr,brr);

        
	}
}