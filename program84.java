/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPerfect
//  Description :   Accept Number from user CheckPerfect Numbers of that number  
//                  (PERFECT FOR INTERVIEW)    
//  Input :         Boolean
//  Output :        Boolean
//  Author :        Varal Rutuja Bharat
//  Date :          7/11/2025
//
//////////////////////////////////////////////////
import java.util.*;

class Number
{
public boolean CheckedPerfect(int iNo)

{   
    int i = 0, iSum = 0;

    if(iNo < 0)    //UPDATOR
    {
        iNo = -iNo;
    }
                             //change
     for(i=1; (i<= (iNo/2)) &&  (iSum < iNo) ; i++)

      {
         if ((iNo % i)==0)
         {
            iSum = iSum +i;
         }
      }

    return (iSum == iNo);    
 }       
}
// End of Number class

class program84
{
    public static void main(String A[])
    {
      int iValue = 0 ;
     boolean bRet = false;


      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter number:");
      iValue=sobj.nextInt();

      Number nobj = new Number();

      bRet=nobj.CheckedPerfect(iValue);

      if(bRet==true)
      {
        System.out.println(iValue+" is perfect number");
      }
      else
      {
        System.out.println(iValue+" is  not a perfect number");

      }

      //IMPORTANT

      sobj = null;
      nobj = null;
      System.gc();
      
    }
}
