/*
2. Write Java program which accept two arrays from user and display even contents of each array. 
Input :  2 9 6 5 2 3   45 6 12 18 23 4
 
Output :  2 6 2    6 12 18 4
*/
import java.lang.*;
import java.util.*;
class MyArray
{
    void Display(int arr[],int brr[])
    {
        for( int i = 0; i<arr.length; i++)
		{
            if(arr[i]%2==0)
            {
            System.out.print(arr[i]+"");
            }
        }
        System.out.println("");
        for( int j = 0; j<brr.length; j++)
		{
            if(brr[j]%2==0)
            {
            System.out.print(brr[j]+"");
            }
        } 

    }
}

class Program2
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