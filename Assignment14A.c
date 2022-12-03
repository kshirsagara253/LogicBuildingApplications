#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
   int iCnt = 0;
   int iEvenSum = 0,iOddSumm = 0;

   for(iCnt = 0;iCnt < iSize; iCnt++)
   {
     if(iCnt % 2 == 1)
     {
       iEvenSum = iEvenSum+ Arr[iCnt];
     }
     else
     {
      iOddSumm =iOddSumm + Arr[iCnt];
     }
   }
   return iEvenSum-iOddSumm;
   
}
int main()
{
  int iLength = 0,iRet = 0,iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements\n");
  scanf("%d",&iLength);

  p = (int*)malloc(iLength * sizeof(int));

  if(p == NULL)
  {
    printf("Memory Not allocated");
    return -1;
  }

  printf("Enter %d elements\n",iLength);

  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("Enter the Element : %d/n",iCnt+1);
    scanf("%d",&p[iCnt]);

  }

  iRet = Difference(p, iLength);

  printf("Difference is %d",iRet);

  free(p);

  return 0;
}