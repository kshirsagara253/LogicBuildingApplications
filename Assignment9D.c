

#include<stdio.h>

int OddFactorial(int iNo)
{
  int  iFact = 1;
  int iCnt;
    if(iNo < 0)
    {
      iNo = -iNo;
    }
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
    if(iCnt % 2 == 1)
    {
    iFact = iFact * iCnt;
    }
  }

  return iFact;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Please enter number :\n");
  scanf("%d",&iValue);

  iRet = OddFactorial(iValue);
  
  printf("Odd Factorial of number is %d",iRet);




  return 0;
}