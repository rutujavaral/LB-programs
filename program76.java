 ////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactors
//  Description :   Accept Number from user Display Factors of that Number 
//                  using BufferReader         
//  Input :         integer,integer
//  Output :        integer
//  Author :        Varal Rutuja Bharat
//  Date :          7/11/2025
//
/////////////////////////////////////////////////////////////////////

import java.io.*;


class program76 

{
    public static void main(String A[])throws IOException //not a good programming
    {
      int iNo = 0 ;
      int i=0;
      
     BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
     

      System.out.println("Enter number:");

     
   
      iNo= Integer.parseInt(bobj.readLine());

      
      for(i=1; i<=(iNo/2) ; i++)

      {
         if ((iNo % i)==0)
         {
            System.out.println(i);
         }
      }
    }
}
