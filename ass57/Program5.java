/*
5. Write Java program which accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol =  4  
Output : 1 2 3 4   5 6 7 8   9 10 11 12
*/
import java.lang.*;
import java.util.*;
class ArrayDemo
{
    void Even(int iRow , int iCol)
    {
        if((iRow != iCol) || (iRow <=0) || (iCol <=0))
		{
			return;
		}
		int i = 0, j = 0, icnt = 1;
		 
        for( i=1; i<=iRow; i++)
        {
            for( j=1; j<=iCol; j++)
            {
                if(i==1)
                {
                    System.out.print(icnt+"\t");
                    icnt++;
                }
                else if(i==2)
                {
                    System.out.print(icnt+"\t");
                    icnt++;
                }
                else if(i==3)
                {
                    System.out.print(icnt+"\t");
                    icnt++;
                }
                else if(i==4)
                {
                    System.out.print(icnt+"\t");
                    icnt++;
                }

            }
            System.out.print("\n"); 
        }
    }
}
class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the row");
        int value1 = sobj.nextInt();

        System.out.println("Enter the column");
        int value2 = sobj.nextInt();

        ArrayDemo dobj = new ArrayDemo();
        dobj.Even(value1,value2);
        
    }
}