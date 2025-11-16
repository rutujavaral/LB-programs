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
class ArrayX
{
    public void Display(int Brr[])
    {
        int i = 0;

     for (i = 0; i< Brr.length; i++)
        {
        System.out.println (Brr [i]);
        }
    }
}
class program94

{
    public static void main (String A[])
    {
        int Arr[] = {10,20,30,40};
       
       ArrayX aboj = new ArrayX();

       aboj.Display(Arr); 
    
    }
}