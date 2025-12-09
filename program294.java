////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program292.java
//  Description :     Collections  [search]
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class program294
{
    public static void main(String A[])
    {
        int Arr[]={45,21,90,54,78};

        for(int no :Arr)           //for each loop
        {
            System.out.println(no);
        }
        
        int index =Arrays.binarySearch(Arr, 90);
            System.out.println("Element found at index:" +index);

    }
}