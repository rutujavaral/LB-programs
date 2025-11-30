////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program254.java
//  Description :     Accept string from user and replace every Ocurrence  with _
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      28/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
    public String  Update( String str)
    {
        
        char Arr[]=str.toCharArray();
          
        Arr[0]='_';

        

        return new String(Arr);
    }
}

public class program254
 
{
   public static void main(String A[])
   {
    
      Scanner scanobj = new Scanner(System.in);

      System.out.println("Enter String:");
      String sobj = scanobj.nextLine();

      StringX  strobj=new StringX();
      sobj= strobj.Update(sobj);                 //change(not preferrable)

      System.out.println("Updated String is:"+sobj);

   }

    
}

    



