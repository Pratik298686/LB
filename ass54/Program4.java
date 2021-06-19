/*
4.Write a program which accept number from user and return multiplication of all digits. 
Input :  2395  Output :  270 
Input :  1018 Output :  8 
Input :  9440 Output :  144 
Input :  922432 Output :  864
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    int Mult(int value)
    {
        int iSum1 = 1,iDigit = 0,iCnt = 0;
        while(value!=0)
        {
            iDigit = value%10;
            iSum1 = iSum1 * iDigit;
            value = value/10;
        }
        return iSum1;
    }
}
class Program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Element");
        int size = sobj.nextInt();
        //int arr[] = new int[size];
        ArrayDemo dobj = new ArrayDemo();
        int ret = dobj.Mult(size);
        System.out.println("count is :"+ret);
    }
}