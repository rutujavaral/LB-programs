////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program287.cpp
//  Description :     stack overflow [static storage class] 
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void Display()
{
        static int iCnt=0;              // static storage class

        cout<<" Jay Ganesh..."<<iCnt<<"\n";
        iCnt++;
        Display();
    
    
}
int main()
{
    Display();

    return 0;
    
}
