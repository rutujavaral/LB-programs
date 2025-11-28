
/////////////////////////////////////////////////////////////////
//
//  File Name :     program235.c
//  Description :   Accept string from user and replace every small character 
//                   into _
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

void Change(char str[])
{

   while(*str !='\0')
   {
    if (*str >= 'a' && *str <='z')
    {
        *str='_';
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

  
    Change(Arr);
    printf("Updated string is :%s\n",Arr);
 
    return 0;
}  

