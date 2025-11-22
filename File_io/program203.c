////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program203.c
//  Description :    TO Read Write file[File handaling] 
//  Input :           
//                  
//  Output :                         
//                  
//  Author :        Varal Rutuja Bharat
//  Date :          22/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  int fd=0,iRet=0;
  char FileName[20];
  char Data[]="India is my country";
  

  printf("Enter the Name of File:\n");
  scanf("%s",FileName);

  fd=open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to Open\n");
        return -1;
    }

  iRet=write(fd,Data,11);
  printf("%d bytes gets sucessfully written\n",iRet);

  close(fd);

  return 0;
}