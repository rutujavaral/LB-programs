///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  Minimum
//  Description :    Accept N number from user and find minimum number
//                  (DYNAMIC MEMORY ALLOCATION)     
//  Input :         integer
//  Output :        integer,float
//  Author :        Varal Rutuja Bharat
//  Date :          14/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

    int Minimum(int Arr[], int iSize)
    {
     int iCnt=0,iMin=0; 

     for(iMin=Arr[0],iCnt=0; iCnt<iSize; iCnt++)
     {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
     }
     return iMin;
    }
int main()

{
   int iLength = 0,iRet=0, iCnt=0;

   IPTR iptr=NULL;

   
   printf("Enter the number of elements: \n");
   scanf("%d",&iLength);

    //step 1:allocate the memory
   iptr = (IPTR)malloc(iLength * sizeof(int));

   if(NULL==iptr)
   {
    printf("Unable to allocate the memory\n");
    return -1;

   }
   printf("Enter the values:\n");

   for(iCnt = 0; iCnt< iLength; iCnt++)
   {
    scanf("%d",&iptr[iCnt]);

   }

  
   //step2:use the memory

   iRet=Minimum(iptr,iLength);

   printf("Minimum number is %d\n",iRet);

  
   //step 3: free the memory
   free(iptr);  

    return 0;
}