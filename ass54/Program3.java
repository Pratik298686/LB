/*
3.Write a program which accept number from user and return the count of digits in between 3 and 7. 
Input :  2395  Output :  1 
Input :  1018 Output :  0 
Input :  4521 Output :  2 
Input :  9922 Output :  0 
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    int Odd(int value)
    {
        int iSum1 = 0,iDigit = 0,iCnt = 0;
        while(value!=0)
        {
            iDigit = value%10;
            if((iDigit>=3)&&(iDigit<=7))
            {
                iCnt++;
            }
            value = value/10;
        }
        return iCnt;
    }
}
class Program3
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