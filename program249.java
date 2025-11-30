/////////////////////////////////////////////////////////////////////////
//
//  File Name :     program249.java
//  Description :   program to count Ocurrence of 'a'
//                  
//  Input :         
//  Output :        
//  Author :        Rutuja Bharat varal
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
    public int CountOccarnce(String str)
    {
        int iCnt = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == 'a')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program249
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        
        iRet = strobj.CountOccarnce(sobj);

        System.out.println("Occrance count is : "+iRet);
    }
}