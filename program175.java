////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program175.java
//  Description :    Pattern  Printing
//  Input :         5                  
//  Output :        a  b  c  d   e
//                  1  2  3  4   5        
//  ASCII:          97 98 99 100 101
//  Author :        Varal Rutuja Bharat
//  Date :          21/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    { 
        int iCnt=0,i=0;

        //int i= 97;
        char ch ='a';
        for(iCnt=1; iCnt<=iNo; iCnt++,ch++)
        {
           System.out.printf("%c\t",ch);
           
        }
        System.out.println();
    }
} 
class program175
{
    public static void main(String A[])

        {
           Scanner sobj=new Scanner(System.in);
           int iValue=0;

           System.out.println("Enter the Frequency:");
           iValue=sobj.nextInt();

           Pattern pobj= new Pattern();
           pobj.Display(iValue);

        }
    
}
