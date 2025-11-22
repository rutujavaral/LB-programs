////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program187.java
//  Description :    Pattern  Printing
//  Input :          iRow:4
//                   iCol:4  
//                  
//  Output :        $ * * * *  
//                  * $ * * *        
//                  * * $ * *
//                  * * * $ *
//                  * * * * $ [Diagonal pattern]


//                  
//  Author :        Varal Rutuja Bharat
//  Date :          21/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
    //FILTER FOR SQUARE MATRIX
    public void Display(int iRow,int iCol)
    {  int i=0,j=0; 
        if(iRow !=iCol)
        {
            System.out.println("Inavlid input");
            System.out.println("Row number and column number should be same");
        }

       for(i=1; i<=iRow; i++)

       {
         for(j=1; j<=iCol; j++)
         {
            if((i==j))
            {
            System.out.printf("$\t");
            }
            else
            {
            System.out.printf("*\t");

            }
            
         }
            System.out.println();

       }
    
    }
} 
class program187
{
    public static void main(String A[])

        {
           Scanner sobj=new Scanner(System.in);
           int iValue1=0,iValue2=0;

           System.out.println("Enter number of Rows:");
           iValue1=sobj.nextInt();

           System.out.println("Enter number of Columns:");
           iValue2=sobj.nextInt();

           Pattern pobj= new Pattern();
           pobj.Display(iValue1,iValue2);

        }
    
}
