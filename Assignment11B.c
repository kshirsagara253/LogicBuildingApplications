

#include<stdio.h>

void EvenRangeDisplay(int iNo1,int iNo2)
{
  int iCnt = 0;
  if(iNo1>iNo2)
  {
    printf("Invalid Range\n");
  }
  for(iCnt = iNo1;iCnt<=iNo2;iCnt++)
  {
    if(iCnt % 2 == 0)
    {
    printf("%d\t",iCnt);
    }
  }
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  
  printf("Enter Starting point  :\n");
  scanf("%d",&iValue1);

  printf("Enter Ending point  :\n");
  scanf("%d",&iValue2);

  EvenRangeDisplay(iValue1,iValue2);
  
  return 0;
}