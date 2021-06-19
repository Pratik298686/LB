/*
1. Write a java program which accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 4  
Output : * * * #   
         * * # *    
         * # * * 
         # * * * 
*/
import java.lang.*;
import java.util.*;

class Matrix 
{
    void Row(int arr[][],int row,int col)
    {
        
        
        for( int i=0; i<row; i++)
        {
            for(int j =0; j<col; j++)
            {
                if((i+j)==(row-1))
                {
                    System.out.print("#"); 
                }
                else 
                {
                    System.out.print("*"); 
                }
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

        Matrix dobj = new Matrix();
        dobj.Row(arr,row,col);
	}
}