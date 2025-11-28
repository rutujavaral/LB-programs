
/////////////////////////////////////////////////////////////////
//
//  File Name :     program222.c
//  Description :   Accept String from user and count
//                  vowels of that strings[capital &small]
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

int CountVowels(char str[])
{
   int iCount=0;
   while(*str !='\0')
   { if((*str=='a')|| (*str=='e')|| (*str=='i')|| (*str=='o')||(*str=='u')||
    (*str=='A')|| (*str=='E')|| (*str=='I') || (*str=='O')||(*str=='U') )
     
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

    iRet=CountVowels(Arr);
 
    printf("Number  of vowels is:%d\n",iRet);
    return 0;
}  

