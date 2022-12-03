

#include<stdio.h>

double SquareMeter(int iNo)
{
  double iSquareMeter = 1.0;

    iSquareMeter = (double)0.0929 * iNo ;

    return iSquareMeter;  
}

int main()
{
  int iValue = 0;
  double dRet = 0.0;
  printf("Enter Area in Square feet  :\n");
  scanf("%d",&iValue);
 
  dRet = SquareMeter(iValue);
  
  printf(" Area in Square Meter  %f",dRet);
  
  return 0;
}