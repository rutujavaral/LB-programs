////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program198.c
//  Description :    TO Delete the file[File handaling] 
//  Input :                            
//  Output :                        
//  Author :        Varal Rutuja Bharat
//  Date :          22/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
 
    unlink("PPA.txt");

    return 0;
}