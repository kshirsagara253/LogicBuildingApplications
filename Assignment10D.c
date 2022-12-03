

#include<stdio.h>

double FhtoCs(float fTemp)
{
   double dCelcius = 1.0;

   dCelcius = (fTemp - 32.0)*(5.0/9.0);
   
   return dCelcius;
}

int main()
{
  float fValue = 0.0;
  double dRet = 0.0;
  printf("Please enter tempreature in farhenhiet :\n");
  scanf("%f",&fValue);
 
  dRet = FhtoCs(fValue);
  
  printf(" Temerature in Celcius is  %f",dRet);
  
  return 0;
}