///typedef used to rename datatype(reference name)
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  
//  Description :   (DYNAMIC MEMORY ALLOCATION)     
//  Input :         integer
//  Output :        integer,float
//  Author :        Varal Rutuja Bharat
//  Date :          14/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int main()

{
   int iLength = 0, iCnt=0;
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
   //call to the function which contains business logic
   //fun(iptr,iLength);

   //step 3: free the memory
   free(iptr);  

    return 0;
}