

#include<stdio.h>

void RangeDisplay(int iNo1,int iNo2)
{
  int iCnt = 0;
  if(iNo1>iNo2)
  {
    printf("Invalid Range\n");
  }
  for(iCnt = iNo2;iCnt>=iNo1;iCnt--)
  {
    printf("%d\t",iCnt);
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

  RangeDisplay(iValue1,iValue2);
  
  return 0;
}