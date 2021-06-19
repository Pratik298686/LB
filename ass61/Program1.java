import java.util.Scanner;

/*
1.Write a program which accept matrix from user and return addition of diagonal elements. Input : 

Output : 12
*/
class Matrix
{
    int Diagonal(int arr[][])
    {
         int iSum = 0; 
        for(int i=0; i<arr.length; i++)
        {
            for(int j=0; j<arr[i].length; j++)
            {
               if(i==j)
               {
                iSum = iSum + arr[i][j];
               }
            }
        }
        System.out.println(+iSum);
        return 0;
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

		for(int i = 0; i<arr.length; i++)
		{
			//System.out.println("Row with index : "+i);
			for(int j = 0; j< arr[i].length; j++)
			{
				//System.out.println("Enter the element :"+i+" , "+j);
				arr[i][j] = sobj.nextInt();
			}
		}
		Matrix mobj = new Matrix();
		mobj.Diagonal(arr);
	}
}