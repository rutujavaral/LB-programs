////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program291.cpp
//  Description :      use of recursive 
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
    static int  iCnt=1;
    auto i=1;

     
     if( iCnt <=3)
    {
        cout<<" Jay Ganesh..."<<iCnt<<"  "<<i<<"\n";
        iCnt++;
        i++;
        Display();      //recursive call
    }
    
}
int main()
{
    cout<<"Inside main\n";

    Display();
    cout<<"End of main\n";
    
    return 0;
    
}
