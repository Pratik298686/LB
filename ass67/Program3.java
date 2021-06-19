/*
3. Write a java program which accept two array from user and copy the contents of that array into another array in reverse order and return new array
*/
import java.lang.*;
import java.util.*;
class MyArray
{
    void Display(int arr[],int brr[])
    {
        for( int i = 0; i<arr.length; i++)
		{
            System.out.print(arr[i]+"");
        }
        System.out.println("");
        for( int j = 0; j<brr.length; j++)
		{
            System.out.print(brr[j]+"");
        }
        System.out.println(" ");
        int length = arr.length+brr.length;
        int result[] = new int[length];
        int pos =0; 
        for( int i = 0; i<arr.length; i++)
		{
           result[i]=arr[i];
           pos++;
        }
        
        for( int j = 0; j<brr.length; j++)
		{
           result[pos++] = brr[j]; 
        }
        for(int i=result.length-1; i>=0; i--)
        {
            System.out.print(result[i]+" ");
        }
    }
}

class Program3
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