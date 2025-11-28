
/////////////////////////////////////////////////////////////////
//
//  File Name :     program223.c
//  Description :   Accept String from user and count
//                   Ocurrence of it
//  Input :         
//  Output :         
//  Author :        Rutuja Bharat varal
//  Date :          27/11/2025
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int CountOccurance(char str[],char ch)
{
   int iCount=0;
   while(*str !='\0')
   {
    if(*str==ch)
    {
        iCount++;
    }
    str++;
   }
     
    return iCount;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50]={'\0'};
    int iRet=0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet=CountOccurance(Arr,'d');
 
    printf("Number  of Ocurrences  is:%d\n",iRet);
    return 0;
}  

