

#include<stdio.h>

double CircleArea(float fRad)
{
   double dArea = 1;

   dArea = (double)3.14 * fRad *fRad ;

   return dArea;
}

int main()
{
  float fValue = 0.0;
  double dRet = 0.0;
 
  printf("Enter Radius\n");
  scanf("%f",&fValue);

  dRet = CircleArea(fValue);

  printf("Area of Circle is %f",dRet);
 

  return 0;
}