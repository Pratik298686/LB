/*
2.Write a program which accept number from user and return the count of odd digits. 
Input :  2395  Output :  3 
Input :  1018 Output :  2 
Input :  -1018 Output :  2 
Input :  8462 Output :  0 
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
            if(iDigit%2==1)
            {
                iCnt++;
            }
            value = value/10;
        }
        return iCnt;
    }
}
class Program2
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
