//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Array program to perform Addition  [using call by addresss /value ds]       
//  Input :         integer
//  Output :        integer
//  Author :        Varal Rutuja Bharat
//  Date :          13/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize) //change
{

   int iCnt=0,iSum=0;

   for(iCnt= 0;iCnt < iSize ; iCnt++)  //change
   {
      iSum=iSum+Arr[iCnt];

   }
   return iSum;

}

int main()
{ 
    int iLength=0;
    int *ptr = NULL; 
    int iCnt =0, iRet = 0;

    printf("Enter number of elements:");
    scanf("%d",&iLength); //5
  
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

   iRet=Summation(ptr,iLength);

   printf("Addition is: %d\n",iRet);

   free(ptr);

   
   return 0;
}