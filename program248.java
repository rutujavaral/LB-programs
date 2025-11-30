/////////////////////////////////////////////////////////////////////////
//
//  File Name :     program248.java
//  Description :   String to convert character array
//                  
//  Input :         
//  Output :        
//  Author :        Rutuja Bharat varal
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
    public void Display(String str)
    {
        int iCnt=0;
        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

public class program248
 
{
   public static void main(String A[])
   {
    
      Scanner scanobj = new Scanner(System.in);

      System.out.println("Enter String:");
      String sobj = scanobj.nextLine();

      StringX  strobj=new StringX();
      strobj.Display(sobj);
      
       
   }
    
}

    



