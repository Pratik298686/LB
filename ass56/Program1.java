/*
1.Write a Java program which accept string from user and count number of capital characters. 
Input :   “Marvellous Multi OS” 
Output :   4
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    void Even(String str)
    {
        int iSum1 = 0,iPos = 0,iCnt = 0;
        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);
            if((ch>='A')&&(ch<='Z'))
            {
               iCnt++;
            }   
        }
        System.out.println("index is : " +iCnt);
    }
}
class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Element");
        String str = sobj.nextLine();
        ArrayDemo dobj = new ArrayDemo();
        dobj.Even(str);
    }
}