/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Array program of OOP design
//                  [using geter seter method]     
//  Input :         integer
//  Output :        integer
//  Author :        Varal Rutuja Bharat
//  Date :          7/11/2025
//
//////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
    public int Arr[]; //characteristics
    public int iSize; //characteristics

    public ArrayX(int no)
    {
        System.out.println("Inside Constructor");
        
        iSize = no;
        Arr = new int[iSize];
    }

    public void Accept() //geter method
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;

        System.out.println("Enter the elements of array : ");

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display() //seter method
    {
        System.out.println("Elements of the array are : ");
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

class program105
{
    public static void main(String A[])
    {
        ArrayX aobj1 = new ArrayX(5);
        System.out.println(aobj1.iSize);

        // Bad code (Need of access specifier)
        aobj1.iSize = 11;
        aobj1.Arr = null;

        ArrayX aobj2 = new ArrayX(7);
        System.out.println(aobj2.iSize);
     }
}
