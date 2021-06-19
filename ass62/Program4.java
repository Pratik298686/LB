/*
4. Write a program which accept matrix and check whether the matrix is identity matrix or not. Identity matrix is a square matrix with 1’s along the diagonal from upper left to lower right and 0’s in all other positions.  If it satisfies the structure as explained before then the matrix is called as identity matrix. 
Input :
*/
import java.lang.*;
import java.util.*;

class Matrix 
{
    boolean Identity(int arr[][],int row,int col)
    {
        
       int temp =0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if((i==j)&&(arr[i][j]!=1))
                {
                    temp=-1;
                    break;
                }
                else if((i!=j)&&(arr[i][j]!=0))
                {
                    temp = -1;
                    break;
                }
            
            }
            System.out.println("");
        }
        if(temp==0)
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
        System.out.println("Enter identity :");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                System.out.print(arr[i][j]+ "");
            }
            System.out.println("");
        }
        Matrix dobj = new Matrix();
       bret =  dobj.Identity(arr,row,col);
       if(bret=true)
       {
        System.out.println("Equal");   
       }
       else
       {
        System.out.println("Not Equal");      
       }
	}
}