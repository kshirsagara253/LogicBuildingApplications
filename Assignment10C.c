

#include<stdio.h>

int KMtoMeter(int iNo)
{
   int iMeter = 1;

   iMeter = 1000 * iNo;
   
   return iMeter;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Please enter distance :\n");
  scanf("%d",&iValue);

  iRet = KMtoMeter(iValue);
  
  printf(" Distance in Meter is  %d",iRet);




  return 0;
}