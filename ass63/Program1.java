/*
1.Write a java program which accept matrix from user and swap the contents of each consecutive rows.
*/
import java.lang.*;
import java.util.*;

class Matrix 
{
    void Row(int arr[][],int row,int col)
    {
        int iStart = 0,temp = 0,i=0;
        int iEnd = row -1;
        while(iStart<iEnd)
        {
           temp = arr[i][iStart];
           arr[i][iStart] = arr[i][iEnd];
           arr[i][iEnd] = temp;
           iStart++;
           iEnd--;
        }
        System.out.println("Enter Transpose is :");
        for( i=0; i<row; i++)
        {
            for(int j =0; j<col; j++)
            {
                System.out.print(arr[i][j]+""); 
            }
            System.out.println("");
        }
    }
}
class Program1
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
        System.out.println("Matrix is :");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                System.out.print(arr[i][j]+ "");
            }
            System.out.println("");
        }
        Matrix dobj = new Matrix();
        dobj.Row(arr,row,col);
	}
}