////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program292.java
//  Description :     Sort Array using inbuilt class in Collections 
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class program293
{
    public static void main(String A[])
    {
        int Arr[]={45,21,90,54,78};

        for(int no :Arr)           //for each loop
        {
            System.out.println(no);
        }
        Arrays.sort(Arr);
            System.out.println("Array after sorting:");

         for(int no :Arr)           //for each loop
        {
            System.out.println(no);
        }    

    }
}