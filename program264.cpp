////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program264.cpp
//  Description :     Specific program
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      29/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int Maximum(int No1,int No2)
{
    if(No1 >No2)
    {
        return No1;
    }
    else
    {

      return No2;
    }
}

    
    int main()
    {
        int iValue1=10,iValue2=11,iRet=0;

        
        iRet=Maximum(iValue1,iValue2);
        cout<<"Maximum:"<<iRet<<"\n";


        return 0;

    }

