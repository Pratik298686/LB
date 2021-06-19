/*
4. Write java program which accept N numbers from user and accept Range, Display all elements from that range 
Input :  N :   6 
  Start: 60     End :  90     Elements : 85 66 3 76 93 88  
Output : 66 76 88 
Input :  N :   6 
  Start: 30     End :  50     Elements : 85 66 3 76 93 88
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    void Even(int arr[],int First,int Last)
    {
        int iSum1 = 0,iPos = 0;
        for( int i=0; i<=arr.length; i++)
        {
            if((arr[i]>=First)&&(arr[i]<=Last))
            {
            System.out.println("index is : " +arr[i]);  
            }
        }

    }
}
class Program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Element");
        int size = sobj.nextInt();
        int First = sobj.nextInt();
        int Last = sobj.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the Array elements");
        for(int i=0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        } 
        ArrayDemo dobj = new ArrayDemo();
        dobj.Even(arr,First,Last);
    }
}