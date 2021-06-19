
import java.lang.*;
import java.util.Scanner;

class Program2
{
    public static void main(String arg[])
    {
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the first string : ");
    String str1 = sobj.nextLine();

    System.out.println("Enter the second string : ");
    String str2 = sobj.nextLine();

    System.out.println(str1.equals(str2)); 
    
}


}