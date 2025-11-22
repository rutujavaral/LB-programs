////////////////////////////////////////////////////////////////////////////////////////////
//  File Name :      program201.c
//  Description :    TO close the file[File handaling] 
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
  int fd=0;
  char fileName[20];

  printf("Enter the file name file that you want to Open:\n");
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

   close(fd);  

    return 0;
}