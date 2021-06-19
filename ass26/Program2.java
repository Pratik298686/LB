/*3. Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly. 
Input :  Q 
Output : Q R S T U V W X Y Z 
Input :  m 
Output : m l k j i h g f e d c b a 
Input :  8 
Output :*/
import java.lang.*;
import java.util.Scanner;
class Program2
{
   public static void main(String[] args) {
       Base bobj = new Base();
       bobj.fun();
    
   }
}
class Base
{
    public void fun()
    {
      Scanner sc1 = new Scanner(System.in);
      System.out.println("Enter character :");
      char n1 = sc1.next().charAt(0);
     // char ch1 = 'A',ch2 = 'a';
     if(n1>='A' && n1<='Z')
     {
     for(int i=n1; i<='Z'; i++)
     {
        System.out.println(i+" ");  
     }
    }
    else if(n1>='a' && n1<='z')
    {
        for(int i=n1; i<='a'; i--)
        {
           System.out.println(i+" ");  
        }  
    }
      
      
    }
}