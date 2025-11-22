////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program200.c
//  Description :    TO Open the file[File handaling] 
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

int main()
{
  int fd=0;
  char fileName[20];

  printf("Enter the file name file that you want to open:\n");
  scanf("%s",fileName);

  fd=open(fileName,O_RDWR);
  if(fd==-1)
  {
    printf("Unable to open file\n");

  }
  else
  {
    printf("File Sucessfully open  with fd:%d\n",fd);
  }

  

    return 0;
}