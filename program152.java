////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name :  Display
//  Description :    Pattern  Printing  
//  Input :          5
//  Output :         * * * * *
//  Author :        Varal Rutuja Bharat
//  Date :          20/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
       
        int iCnt =0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            System.out.print("\t*");
        }
    System.out.println();
    }
} 
class program152
{
    public static void main(String A[])
        {
            Scanner sobj = new Scanner(System.in);
            int iValue = 0;

            System.out.println("Enter the Frequency :");
            iValue = sobj.nextInt();

            Pattern pobj=new Pattern();
            pobj.Display(iValue);
        }
    
}
