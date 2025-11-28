
/////////////////////////////////////////////////////////////////
//
//  File Name :     program217.c
//  Description :   Problems on String [find length of string]     
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

int strlenX(char str[])
{
   int iCount=0;
   while(*str !='\0')
   {
     iCount++;
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

    iRet=strlenX(Arr);
 
    printf("String length is:%d\n",iRet);
    return 0;
}  

