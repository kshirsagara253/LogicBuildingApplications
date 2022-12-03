#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float fPer = 0.0;
    if(iNo2 == 0)
    {
      return fPer;
    }
   fPer = (float)iNo2/iNo1*100;
   

   return fPer;
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  
  float fRet = 0.0;
  printf("Please enter total marks :\n");
  scanf("%d",&iValue1);
  printf("Please enter marks obtained\n");
  scanf("%d",&iValue2); 
  fRet = Percentage(iValue1,iValue2);
  
  printf("%f",fRet);
  



  return 0;
}