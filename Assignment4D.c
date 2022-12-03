#include<stdio.h>

int SumNonFact(int iNo)
{
  int iAns = 0;
  int iCnt = 0;

  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if(iNo%iCnt != 0)
    {
      iAns = iAns + iCnt ;

    }
  }
  

  return iAns;
  
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);
  iRet = SumNonFact(iValue);\

  printf("%d",iRet);
  return 0;
}