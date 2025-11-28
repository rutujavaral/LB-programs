
/////////////////////////////////////////////////////////////////
//
//  File Name :     program234.c
//  Description :   Accept string from user and count
//                   no of WhiteSpaces of it
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

void CountSpace(char str[])
{

   int iCount=0;

   while(*str !='\0')
   {
    if (*str == ' ')
    {
        iCount++;
    } 
    str++;
}
 
   printf("Number of Spaces:%d\n",iCount);
   
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50]={'\0'};
    

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

  
    CountSpace(Arr);
 
    return 0;
}  

