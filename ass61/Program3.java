/*
3. Write a program which accept matrix and return largest number from both the diagonals Input : 
Output : 9
*/
import java.lang.*;
import java.util.*;
class Matrix1
{
    int Diagonal1(int arr[][])
    {
         int iNo = 4; 
         int imax1=0,imax2=0;
        for(int i=0; i<arr.length; i++)
        {
             imax1 = arr[i][0];
             imax2 = arr[i][0];
            for(int j=0; j<arr[i].length; j++)
            {
                if(i==j)
               {
                if(arr[i][j] > imax1)
				{
					imax1 = arr[i][j];
				}
               }
               if ((i+j)==(iNo-1)) 
               {
                if(arr[i][j] > imax2)
				{
					imax2 = arr[i][j];
				} 
               }
            }
            iNo--;
        }
        System.out.println(+imax1);
        System.out.println(+imax2);
        return 0;
    }
}
class Program3
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

		for(int i = 0; i<arr.length; i++)
		{
			//System.out.println("Row with index : "+i);
			for(int j = 0; j< arr[i].length; j++)
			{
				//System.out.println("Enter the element :"+i+" , "+j);
				arr[i][j] = sobj.nextInt();
			}
		}
		Matrix1 mobj1 = new Matrix1();
        mobj1.Diagonal1(arr);
	}
}