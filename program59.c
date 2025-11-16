//Accept no from user check prime or not
 
#include<stdio.h>
#include<stdbool.h>


int CheckPrime(int iNo)
{
    int iCnt=0;
    bool bFlag=False;

    if(iNo < 0)
    {
        iNo=-iNo;
    }
     
  for(iCnt = 2,bFlag=true ; iCnt <= (iNo/2); iCnt++)
  {
    if((iNo % iCnt)==0)
    {
        bFlag=False;
        break;               //Optimization
    }
  }  
  return bFlag;        //Atleast one factor
  }


//Time complexity Best case: O(1)
//Time complexity Worst case: O(N\2)


int main()
{
   int iValue=0;
   bool  bRet=False;

   printf("Enter the Number:\n");
   scanf("%d",&iValue);
   
   bRet=CheckPrime(iValue);

  if (bRet==true)
  {

     printf("%d is  a prime number\n",iValue);

  }
  else
  {
     printf("%d is   not a prime number\n",iValue);
     
  }
    return 0;
}
/*
Time complexity: for prime -N/2
Time complexity for Non Prime - either 1 or 2
*/