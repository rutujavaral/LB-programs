////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program208.c
//  Description :    use of Write System call  [File handaling] 
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
  char Data[50]={'\0'};
  

  printf("Enter the Name of File:\n");
  scanf("%s",FileName);

  fd=open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to Open\n");
        return -1;
    }

  iRet=read(fd,Data,7);
  printf("%d bytes gets sucessfully Read\n",iRet);

  printf("Data from file:\n");

  write( 1,Data ,iRet);
  printf("\n");


  close(fd);

  return 0;
}