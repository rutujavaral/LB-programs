////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     program253.java
//  Description :   Accept string from user and replace every Ocurrence  with _
//                  
//  Input :         
//  Output :        
//  Author :        Rutuja Bharat varal
//  Date :          28/11/2025
//
////////////////////////////////////////////////////////////////////////////////////

// Input : Hello    Output : _ello

import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '_';

        return new String(Arr);     // Change
    }
}

class program253
{
    public static void main(String A[])
    {
        String sRet = null;

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        
        sRet = strobj.Update(sobj);

        System.out.println("Updated string : "+sRet);
    }
}