/*
1. Write Java program which accept number of rows and number of columns from user and display below pattern. 
Input :  iRow = 4  iCol = 3  
Output : * * *   * * *   * * *   * * *
*/

import java.lang.*;
import java.util.*;

class Program1
{
    //private static Scanner sobj;
    public static void main(String arg[])
    {
        int i=0,j=0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the row");
        int value1 = sobj.nextInt();

        System.out.println("Enter the column");
        int value2 = sobj.nextInt();

        for( i=1; i<=value1; i++)
        {
            for( j=1; j<=value2; j++)
            {
                System.out.print(" * \t"); 
            }
            System.out.print("\n"); 
        }
        
    }
}