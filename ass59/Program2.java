/*
2. Write Java program which accept String from user and display below pattern. 
Input :  Hello 
Output : H e l l o   
         H e l l    
         H e l   
         H e   
         H
*/
import java.lang.*;
import java.util.*;
class DemoString
{
	int WordFrequency(String str)
	{
		char arr[] = str.toCharArray();
		int size = arr.length;
        int i = 0, j= 0;
        
        for(i=size-1; i>=0; i--)
        {
            for(j=0; j<=i; j++)
            {
                System.out.print(""+arr[j]);
            }
            System.out.print("\n");
        }
        return 0;
    }
    
}
class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string");

        String str = sobj.nextLine();
        sobj.close();
		DemoString dobj = new DemoString();

		dobj.WordFrequency(str);
	}
}