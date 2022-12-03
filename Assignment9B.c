

#include<stdio.h>

int DollarToINR(int iNo)
{
  int iINR = 1;

  iINR = iNo * 70;

  return iINR;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Please enter number of USD :\n");
  scanf("%d",&iValue);

  iRet = DollarToINR(iValue);
  
   printf("Value in INR is %d",iRet);




  return 0;
}