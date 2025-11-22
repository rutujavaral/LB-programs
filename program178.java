////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program178.java
//  Description :    Pattern  Printing
//  Input :          8               
//  Output :        z y x w v u t s
//  Index:          1 2 3 4 5 6 7 8                     
//  ASCII:          65 66 67 68 69
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
        
        char ch ='z';
        for(iCnt=1; iCnt<=iNo; iCnt++, ch--)
        {
          
           System.out.printf(ch+"\t");
           
          
        }
        System.out.println();
    }
} 
class program178
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
