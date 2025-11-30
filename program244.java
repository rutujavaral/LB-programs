/////////////////////////////////////////////////////////////////////////
//
//  File Name :     program244.java
//  Description :   String program in java 
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
        for(iCnt=0; iCnt<str.length(); iCnt++)
            {
                System.out.println(str.charAt(iCnt));
            } 
    }
}

public class program244
 
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

    



