////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program199.c
//  Description :    TO create the file[File handaling] 
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

  printf("Enter the file name file that you want to create:\n");
  scanf("%s",fileName);

  fd=creat(fileName,0777);

  if(fd==-1)
  {
    printf("Unable to create file\n ");
  }
  else
  {
    printf("File sucessfully created with fd:%d",fd);
  }

    return 0;
}