////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program196.c
//  Description :    TO create the file[File handaling] 
//  Input :                             
//  Output :                                       
//  Author :        Varal Rutuja Bharat
//  Date :          22/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>

int main()
{
  int fd=0;

  fd=creat("PPA.txt",0777);

  if(fd==-1)
  {
    printf("Unable to create file\n ");
  }
  else
  {
    printf("File sucessfully created\n");
  }

    return 0;
}