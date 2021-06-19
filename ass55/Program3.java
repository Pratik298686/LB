/*
3. Write java program which accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO. 
Input :  N :   6 
  NO:  66 
  Elements : 85 66 3 66 93 88  
Output : 3 
Input :  N :   6 
  NO:  93 
  Elements : 85 66 3 66 93 88  
Output : 4 
Input :  N :   6 
  NO:  12 
  Elements : 85 11 3 15 11 111  
Output : -1
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    void Even(int arr[],int value)
    {
        int iSum1 = 0,iPos = 0;
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i]==value)
            {
               iPos = i;
            }   
        }
        System.out.println("index is : " +iPos);
    }
}
class Program3
{
    public static void main(String arg[])
    {
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
        dobj.Even(arr,value);
    }
}