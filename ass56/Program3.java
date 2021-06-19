/*
3. Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters
Input :    “MarvellouS”
Output :   6 (8-2)
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    int Even(String str)
    {
        int iSum1 = 0,iCnt1 = 0,iCnt2 = 0;
        for(int i=0; i<str.length(); i++)
        {
            char ch = str.charAt(i);
            if((ch>='a')&&(ch<='z'))
            {
               iCnt1++;
            } 
            else{
                iCnt2++;
            }  
        }
        return iCnt1-iCnt2;
    }
}
class Program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Element");
        String str = sobj.nextLine();
        ArrayDemo dobj = new ArrayDemo();
        int ret = dobj.Even(str);
        System.out.println("count is :"+ret);
    }
}