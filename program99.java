/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Array program             
//  Input :         integer
//  Output :        integer
//  Author :        Varal Rutuja Bharat
//  Date :          7/11/2025
//
//////////////////////////////////////////////////////////////////////////////
import java.util.*;

class ArrayX
{
    

    public static void Display(int Brr[])
    {
        int i = 0;
        for(i = 0; i < Brr.length ; i++)
        {
            System.out.println(Brr[i]);
        }
    }
}
class program99
{
    public static void main (String A[])
    {

        Scanner sobj = new Scanner (System.in);

        int iSize = 0;

        System.out.println("Enter the Size of Array :");
        iSize = sobj.nextInt();


        int Arr[] = new int [iSize];

        System.out.println("Enter the Elements :");


      Arr[0]=sobj.nextInt();
      Arr[1]=sobj.nextInt();
      Arr[2]=sobj.nextInt();
      Arr[3]=sobj.nextInt();
      Arr[4]=sobj.nextInt();
     
      ArrayX aboj = new ArrayX();
      aboj.Display(Arr);

      //IMPORTANT
      aboj= null;
      Arr= null;
      sobj= null;
      System.gc();
    }
}