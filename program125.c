//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Array program  [using call by addresss  ds]       
//  Input :         integer
//  Output :        integer
//  Author :        Varal Rutuja Bharat
//  Date :          13/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize) //change
{

      int iCnt=0;
      for(iCnt= 0;iCnt < iSize ; iCnt++)  //change
      {
         printf("%d\n",Arr[iCnt]);
      }

}

int main()
{ 
    int iLength=0;
    int *ptr =NULL; 
    int iCnt =0;

    printf("Enter number of elements:");
    scanf("%d",&iLength); //5
  
   ptr = (int *)malloc(iLength * sizeof(int));   //dynamic memory allocation
   
   if(ptr = NULL)  //major issue   
   {
    printf("Unable to allocate memory \n");
    return -1;
   }

   printf("Enter the elements:\n");

   for(iCnt= 0; iCnt < iLength;iCnt ++)
   {
      scanf("%d",&ptr[iCnt]);
   }

   Display(ptr,iLength);

   free(ptr);

   
   return 0;
}