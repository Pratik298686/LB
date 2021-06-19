/*
4. Write java program which accept array of characters from user and count number of capital characters. 
Input :  b N j B R b A d G G  
Output : 6
*/
import java.lang.*;
import java.util.*;
class MyArray
{
    void Display(char str)
    {
        int count = 0; 
        for(int i=0; i<str.length(); i++)
        {
         char ch = str.charAt(i);
            if( (ch >= 'A') && (ch <= 'Z') )
         {
             count++;
         }  
        }
        System.out.println(count+"");
    }
}

class Program3
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = sobj.nextLine();
        
        MyArray dobj = new MyArray();
        dobj.Display(str);

        
	}
}