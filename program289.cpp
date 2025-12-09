////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program289.cpp
//  Description :     use of static and auto storage class
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

void auto_demo()
{
      auto i = 1;  
      cout<<"auto_demo:"<<i<<"\n";
      i++;
    
}

void static_demo()
{
       static int i  = 1;  
      cout<<"static_demo:"<<i<<"\n";
      i++;
    
}
int main()
{
     auto_demo();
     auto_demo();   
     auto_demo();   
     auto_demo();  
     
     static_demo();
     static_demo();   
     static_demo();   
     static_demo();   
  
    return 0;
    
}
