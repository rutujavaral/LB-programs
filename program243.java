/////////////////////////////////////////////////////////////////////////
//
//  File Name :     program243.java
//  Description :   String program in java 
//                  
//  Input :         HELLO
//  Output :        H  E  L L O
//  Author :        Rutuja Bharat varal
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////////

import java.util.*;

public class program243
 
{
   public static void main(String A[])
   {
    int iCnt=0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter String:");
      
      String str= sobj.nextLine();
     
      
       for(iCnt=0; iCnt<str.length(); iCnt++)
      {
        System.out.println(str.charAt(iCnt));
      }
   }
    
}

    



