/*
2.Write a java program which accept matrix from user and swap the contents of each consecutive columns.
*/
import java.lang.*;
import java.util.*;

class Matrix 
{
    void Identity(int arr[][],int row,int col)
    {
        int iStart = 0,temp = 0,i=0,j=0;
        int iEnd = col -1;
       
        System.out.println("Enter Transpose is :");
        for( i=row-1; i>=0; i--)
        {
            for( j =0; j<col; j++)
            {
                System.out.print(arr[i][j]+""); 
            }
            System.out.println("");
        }
    }
}
class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows");
		int row = sobj.nextInt();

		System.out.println("Enter number of columns");
        int col = sobj.nextInt();

		int arr[][] = new int[row][col];

		System.out.println("Enter the elements");

		for(int i = 0; i<row; i++)
		{
			//System.out.println("Row with index : "+i);
			for(int j = 0; j<col; j++)
			{
				//System.out.println("Enter the element :"+i+" , "+j);
				arr[i][j] = sobj.nextInt();
			}
        }
        System.out.println("Matrix is identity :");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                System.out.print(arr[i][j]+ "");
            }
            System.out.println("");
        }
        Matrix dobj = new Matrix();
        dobj.Identity(arr,row,col);
	}
}