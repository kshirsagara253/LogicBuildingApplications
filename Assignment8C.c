

#include<stdio.h>

int Factorial(int iNo)
{
  int  iFact = 1;
  int iCnt;
    if(iNo < 0)
    {
      iNo = -iNo;
    }
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
    iFact = iFact * iCnt;
  }

  return iFact;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Please enter number :\n");
  scanf("%d",&iValue);

  iRet = Factorial(iValue);
  
   printf("Factorial of number is %d",iRet);




  return 0;
}