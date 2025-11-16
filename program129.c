//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Array program to count even numbers [using call by addresss/value  ds]       
//  Input :         integer
//  Output :        integer
//  Author :        Varal Rutuja Bharat
//  Date :          13/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize) 
{

   int iCnt=0,iCount=0;

   for(iCnt= 0;iCnt < iSize ; iCnt++)  
   {
      if((Arr[iCnt]%2)==0)
      {
        iCount ++;
      }

   }
   return iCount;

}

int main()
{ 
    int iLength=0;
    int *ptr = NULL; 
    int iCnt =0, iRet = 0;

    printf("Enter number of elements:");
    scanf("%d",&iLength); 
    ptr = (int *)malloc(iLength * sizeof(int));   //dynamic memory allocation
   
   if (NULL == ptr)  //INDUSTRIAL WAY OF CODING  
   {
      printf("Unable to allocate memory \n");
      return -1;
   }

   printf("Enter the elements:\n");

   for(iCnt= 0; iCnt < iLength;iCnt ++)
   {
      scanf("%d",&ptr[iCnt]);
   }

   iRet=CountEven(ptr,iLength);

   printf("Number of even elements is: %d\n",iRet);

   free(ptr);

   
   return 0;
}