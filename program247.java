/////////////////////////////////////////////////////////////////////////
//
//  File Name :     program247.java
//  Description :   String program in java 
//                  
//  Input :         
//  Output :        
//  Author :        Rutuja Bharat varal
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////////

import java.util.*;

public class program247
 
{
   public static void main(String A[])
   {
    
      int iCnt=0;
     
       Scanner scanobj = new Scanner(System.in);

      System.out.println("Enter String:");
      String sobj = scanobj.nextLine();

      char Arr[]=sobj.toCharArray(); 

      for(iCnt=0 ;iCnt<Arr.length;iCnt++)
      {
      System.out.println(Arr[iCnt]);
      }
      

   }
    
}

    



