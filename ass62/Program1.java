/*
1.Write a program which accept matrix from user and display transpose of the matrix. The transpose of a given matrix is formed by interchanging the rows and columns of a matrix. 
Input 
*/
import java.lang.*;
import java.util.*;

class Matrix 
{
    void Transpose(int arr[][],int row,int col)
    {
        int Trans[][] = new int[row][col];
        for(int i=0; i<row; i++)
        {
            for(int j =0; j<col; j++)
            {
                Trans[i][j] = arr[j][i];
            }
        }
        System.out.println("Enter Transpose is :");
        for(int i=0; i<row; i++)
        {
            for(int j =0; j<col; j++)
            {
                System.out.print(Trans[i][j]+""); 
            }
            System.out.println("Enter Transpose is :");
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
        dobj.Transpose(arr,row,col);
	}
}