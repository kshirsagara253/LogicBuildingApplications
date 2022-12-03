#include<stdio.h>

int MultFact(int iNo)
{
  int iAns = 1;
  int iCnt = 0;

  for(iCnt= 1;iCnt<=iNo/2;iCnt ++)
  {
    if(iNo%iCnt == 0)
    {
      iAns=iAns*iCnt;
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

  iRet = MultFact(iValue);

  printf("%d",iRet);
  

  return 0;
}