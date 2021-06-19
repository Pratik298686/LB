/*
5. Write java program which accept N numbers from user and return product of all odd elements. 
Input :  N :   6     Elements : 15 66 3 70 10 88
Output : 45 
Input :  N :   6     Elements : 44 66 72 70 10 88  
Output : 0 
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    int Even(int arr[])
    {
        int iSum1 = 0,iPos = 0;
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i]%2==1)
            {
               iSum1 = iSum1 + arr[i];
            }   
        }
        return iSum1;
    }
}
class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Element");
        int size = sobj.nextInt();
    //    int value = sobj.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the Array elements");
        for(int i=0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        } 
        ArrayDemo dobj = new ArrayDemo();
        int ret = dobj.Even(arr);
        System.out.println("index is : " +ret);
    }
}