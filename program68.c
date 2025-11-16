 //  iteration
 
#include<stdio.h>

int CountDigits(int iNo)
{
   int iDigit=0;
    int iCount=0;
   


 while(iNo != 0)
   {

    
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo / 10 ;
     iCount++;
    
   }
  
  return iCount;
}
   

int main()
{
   int iValue=0,iRet=0;
   

   printf("Enter the Number :\n");
   scanf("%d",&iValue);
   
   iRet=CountDigits(iValue);   

   printf("No of digits are : %d\n",iRet);

    return 0;
}
