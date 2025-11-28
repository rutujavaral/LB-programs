
/////////////////////////////////////////////////////////////////
//
//  File Name :     program220.c
//  Description :   Accept String from user and count
//                  Occurences of 'A'or 'a' in that String 
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

int Count(char str[])
{
   int iCount=0;
   while(*str !='\0')
   { if(*str=='A'||  *str=='a')
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

    iRet=Count(Arr);
 
    printf("Count of a is:%d\n",iRet);
    return 0;
}  

