

#include<stdio.h>

int FactorialDiff(int iNo)
{
  int  iFact1 = 1;
  int iFact2 = 1;
  int iCnt;
    if(iNo < 0)
    {
      iNo = -iNo;
    }
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
    if(iCnt % 2 == 0)
    {
    iFact1 = iFact1 * iCnt;
    }
    else
    {
      iFact2 = iFact2 * iCnt;
    }
  }

  return iFact1-iFact2;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Please enter number :\n");
  scanf("%d",&iValue);

  iRet = FactorialDiff(iValue);
  
  printf(" Factorial Difference is %d",iRet);




  return 0;
}