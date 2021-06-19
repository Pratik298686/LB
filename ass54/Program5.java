/*
5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits. 
Input :  2395  Output :  -15 (2 - 17) 
Input :  1018 Output :  6 (8 - 2) 
Input :  8440 Output :  16  (16 - 0) 
Input :  5733 Output :  -18 (0 - 18)
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    int Odd(int value)
    {
        int iSum1 = 0,iSum2 = 0,iDigit = 0,iCnt = 0;
        while(value!=0)
        {
            iDigit = value%10;
            if(iDigit%2==0)
            {
                iSum1 = iSum1 + iDigit;
            }
            else
            {
                iSum2 = iSum2 + iDigit;
            }
            value = value/10;
        }
        return iSum1-iSum2;
    }
}
class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Element");
        int size = sobj.nextInt();
        //int arr[] = new int[size];
        ArrayDemo dobj = new ArrayDemo();
        int ret = dobj.Odd(size);
        System.out.println("count is :"+ret);
    }
}