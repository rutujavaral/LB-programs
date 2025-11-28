
/////////////////////////////////////////////////////////////////
//
//  File Name :     program239.c
//  Description :   Accept any string capital or small from user and convert  
//                   the string into  toggle case
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

void strtoggleX(char str[])
{

   while(*str !='\0')
   {
    if (*str >= 'a' && *str <='z')
    {
        *str= *str - 32 ;
    } 
    else if (*str >= 'A' && *str <='Z')
    {
        *str= *str + 32 ;
         
    }
    
    str++;
}  
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

  
    strtoggleX(Arr);
    printf("Updated string is :%s\n",Arr);
 
    return 0;
}  

