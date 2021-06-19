/*
5.Write a java program which accept matrix from user and return addition of border elements of matrix.
*/
import java.lang.*;
import java.util.*;

class Matrix 
{
    void Identity(int arr[][],int row,int col)
    {
        int i=0,j=0,iSum1 = 0,iSum2 =0,iSum= 0;
        
       
        System.out.println("Enter Transpose is :");
        for( i=row-1; i>=0; i--)
        {
            for( j =0; j<col; j++)
            {
                if(((i==0)||(i==3))&&((j==0)||(j==1)||(j==2)||(j==3)))
                {
                    iSum1 = iSum1+arr[i][j];
                }
                if(((i==1)||(i==2))&&((j==0)||(j==3)))
                {
                    iSum2 = iSum2+arr[i][j];
                }


            }
            System.out.println("");
        }
       iSum = iSum1 + iSum2;
        System.out.println(iSum+"");
    }
}
class Program5
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