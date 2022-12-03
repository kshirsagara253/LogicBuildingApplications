#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
      return ;
    }
    int iCnt = 0;
    for(iCnt = 2;iCnt<=iNo*2;iCnt+=2)
     {
         printf("%d\n",iCnt);
     }
}


int main()
{
   int iValue = 0;

   printf("Enter the Number\n");
   scanf("%d",&iValue);

   PrintEven(iValue);

  return 0;
}