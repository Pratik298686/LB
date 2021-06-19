/*
1. Write java program which accept N numbers from user and accept one another number as NO , check whether NO is present or not. 
Input :  N :   6 
  NO:  66 
  Elements : 85 66 3 66 93 88  
Output : TRUE 
Input :  N :   6 
  NO:  12 
  Elements : 85 11 3 15 11 111  
Output : FALS
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    boolean Even(int arr[],int value)
    {
        int iSum1 = 0;
        int itemp = value;
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i]==value)
            {
               break;
            }   
        }
        if(arr[i]==itemp )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
class Program4
{
    public static void main(String arg[])
    {
        boolean bret = false;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Element");
        int size = sobj.nextInt();
        int value = sobj.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the Array elements");
        for(int i=0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        } 
        ArrayDemo dobj = new ArrayDemo();
        bret = dobj.Even(arr,value);
        if(bret == true)
        {
            System.out.println("NO is Present"); 
        }
        else
        {
            System.out.println("NO is not Present"); 
        }
    }
}
