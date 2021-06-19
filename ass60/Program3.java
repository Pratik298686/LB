/*
 
*/

import java.lang.*;
import java.util.Scanner;

class Program3
{
    public static void main(String arg[])
    {
    int iCnt = 0;
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the first string : ");
    String str1 = sobj.nextLine();

  //  System.out.println("Enter the second string : ");
  //  String str2 = sobj.nextLine();

    char arr[] = str1.toCharArray();
    //char brr[] = str2.toCharArray();
    String rev = "";
    for(int i=arr.length-1; i>=0; i--)
    {
        if((arr[i]>='A')&&(arr[i]<='Z'))
        {
          arr[i] = (char)((int)arr[i]+32);
        }
        else
        {
            arr[i] = (char)((int)arr[i]+32);
        }
      //  rev = rev + arr[i];
    }
    for(int j=0; j<=arr.length; j++)
    {
        System.out.println(""+arr[j]);
    }
   // System.out.println(""+rev);
    
}


}