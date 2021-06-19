/*
1. Write java program which accept array from user and reverse each number of that array. 
Input :  89 687 56 549 87 9 
Output :  98 786 65 945 78 9
*/
import java.lang.*;
import java.util.*;
class MyArray
{
    void Display(int arr[])
    {
        for(int i=0; i<arr.length; i++)
        {
            int revers = 0;
            while(arr[i]!=0)
            {
            revers = revers*10 +arr[i]%10;
            arr[i]=arr[i]/10;
            }
            System.out.print(revers+" ");
        }
    }
}

class Program1
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of first array");
		int no1 = sobj.nextInt();

        int arr[] = new int[no1];

		System.out.println("Enter the first array");

		for( int i = 0; i<arr.length; i++)
		{
			arr[i]= sobj.nextInt();
        }
        
        MyArray dobj = new MyArray();
        dobj.Display(arr);

        
	}
}