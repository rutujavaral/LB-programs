////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program283.cpp
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
    
        cout<<" Jay Ganesh...\n";
        Display();
    
    
}
int main()
{
    Display();

    return 0;
    
}
