/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : 
//  Description :   Array program of OOP Design   
//  Input :         integer
//  Output :        integer
//  Author :        Varal Rutuja Bharat
//  Date :          7/11/2025
//
///////////////////////////////////////////////////////////////////////////////
//OOP DESGIGN
class ArrayX
{
    public int Arr[];  //characteristics
    public int iSize;  //characteristics

    public ArrayX(int no)
    {
      iSize = no;
      Arr = new int[iSize];
    }
}

class program103
{
    public static void main(String A[])
    {
       ArrayX aobj1 = new ArrayX(5);
       ArrayX aobj2 = new ArrayX(7);
       ArrayX aobj3 = new ArrayX(3);
       

    }
}