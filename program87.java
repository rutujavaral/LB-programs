///acept no from user and calculate Factorial of Number
//eg = ip 5 op 5*4*3*2*1=120

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateFactorial
//  Description :   Accept Number from user and Calculate Factorial of that number                  
//  Input :         integer
//  Output :        integer
//  Author :        Varal Rutuja Bharat
//  Date :          7/11/2025
//
//////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Number
{
public int CalculateFactorial(int iNo)

{   

    int i= 0, iFact = 1 ;

     if(iNo < 0)    //UPDATOR
    {
        iNo = -iNo;
    }

    for(i= 1; i<= iNo; i++)  
    {
        iFact = iFact * i;
    }
    return iFact;
 }       
}
// End of Number

class program87
{
    public static void main(String A[])
    {
      int iValue = 0, iRet = 0 ;
     

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter number:");
      iValue=sobj.nextInt();

      Number nobj = new Number();

      iRet = nobj.CalculateFactorial(iValue);

      System.out.println("Factorial is :" + iRet);

      //important

      sobj = null;
      nobj = null;
      System.gc();
       
    }
}
