/*
5. Write a java program which accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol =  4  
Output : 1 2 3 4 5   
         1 2     5   
         1   3   5   
         1     4 5 
         1 2 3 4 5
*/
import java.lang.*;
import java.util.*;
class Matrix 
{
    void Row(int arr[][],int row,int col)
    {
        
        
        for( int i=1; i<=row; i++)
        {
            for(int j =1; j<=col; j++)
            {
                if(i==j)
                {
                    System.out.print(j+" "); 
                }
                else if((i==1)||(i==row)||(j==1)||(j==col)) 
                {
                    System.out.print(j+" "); 
                }
                else  
                {
                    System.out.print(  " ");                    
                }
                
            }
            System.out.println(" ");
        }
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

        Matrix dobj = new Matrix();
        dobj.Row(arr,row,col);
	}
}