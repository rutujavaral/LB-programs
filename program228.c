
/////////////////////////////////////////////////////////////////
//
//  File Name :     program228.c
//  Description :   Accept string from user and count
//                  number of small characters of it
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

int CountSmall(char str[])
{
   int iCount=0;
   while(*str !='\0')
   {
    if((*str>= 'a') && (*str<='z'))
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

  
    iRet=CountSmall(Arr);
 
    printf("Number  of small characters are :%d\n",iRet);
    return 0;
}  

