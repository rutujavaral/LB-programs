////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program286.cpp
//  Description :     stack overflow  
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
        auto  iCnt=0;              //auto storage class

        cout<<" Jay Ganesh..."<<iCnt<<"\n";
        iCnt++;
        Display();
    
    
}
int main()
{
    Display();

    return 0;
    
}
