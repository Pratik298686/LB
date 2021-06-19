/*
5. Write a program which accept matrix and swap the contents of consecutive rows.
*/
import java.lang.*;
import java.util.*;

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
        System.out.println("Matrix is :");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                System.out.print(arr[i][j]+ "");
            }
            System.out.println("");
        }
		while(true)
        {
          int x,y,n,temp = 0;
          System.out.println("Enter 1 interchane the row :\n");
          System.out.println("Enter 2 interchane the row :\n");
          n = sobj.nextInt();
          switch(n)
          {
        case 1:
        System.out.println("Enter the row number :\n");
        x = sobj.nextInt();
        y = sobj.nextInt();
        for(int i=0; i<row; i++)
        {
              temp = arr[(x-1)][i];
              arr[(x-1)][i] = arr[(y-1)][i];
              arr[y-1][i] = temp;
        }
            System.out.println("Matrix After interchanging the row :\n");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                System.out.print(arr[i][j]+ "");
            }
            System.out.println("");
        }
           break;

        case 2:
        System.exit(0);

           }
        }
	}
}