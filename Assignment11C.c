

#include<stdio.h>

int SumRange(int iNo1,int iNo2)
{
  int iCnt = 0;
  int iSum = 0;
  if(iNo1>iNo2 || iNo1<0)
  {
   
    return -1;
  }
  for(iCnt = iNo1;iCnt<=iNo2;iCnt++)
  {
    iSum = iSum + iCnt;
  }

  return iSum;
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  int iRet = 0;
  
  printf("Enter Starting point  :\n");
  scanf("%d",&iValue1);

  printf("Enter Ending point  :\n");
  scanf("%d",&iValue2);

  iRet = SumRange(iValue1,iValue2);
  if(iRet == -1)
  {
     printf("Invalid Range\n");
  }
 else
  {
  printf("Sum of Range is %d\n",iRet);
  }
  return 0;
}