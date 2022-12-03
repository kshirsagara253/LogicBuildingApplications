#include<stdio.h>

void DisplayReverse(int iNo)
{
  int iDigit = 0;
     if(iNo<0)
     {
      iNo = -iNo;
     }
    while(iNo != 0)
    {
      iDigit = iNo % 10;
      printf("%d\n",iDigit);
      iNo = iNo/10;
    }
}

int main()
{
   int iValue = 0;

   printf("Enter the Number\n");
   scanf("%d",&iValue);
   DisplayReverse(iValue);

   return 0;
}