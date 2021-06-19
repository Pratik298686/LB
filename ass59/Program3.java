/*
3. Write Java program which accept String from user and display below pattern. 
Input :  Hello 
Output : H   
         H e   
         H e l   
         H e l l   
         H e l l o
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
        
        for(i=0; i<=size-1; i++)
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
class Program3
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