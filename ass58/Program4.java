/*
4. Write Java program which accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 3  iCol = 4  
Output : * # * #    * # * #    * # * #
*/
import java.util.Scanner;

public class Program4
{
    private static Scanner sobj;
    public static void main(String arg[])
    {
        int i=0,j=0,iCnt=5;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the row");
        int value1 = sobj.nextInt();

        System.out.println("Enter the column");
        int value2 = sobj.nextInt();

        for( i=1; i<=value1; i++)
        {
            for( j=1; j<=value2; j++)
            {
                if((j==1)||(j%2==1))
                {
                    System.out.print("*\t");  
                }
                else if((j%2==0))
                {
                    System.out.print("#\t");
                }

            }
            System.out.print("\n");
             
        }
        
    }
}