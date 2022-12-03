#include<stdio.h>
#include<stdlib.h>

int CountEvenOddDif(int Arr[], int iSize)
{
  int iCnt = 0;
  int ifreq1 = 0;
  int ifreq2 = 0;
  
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt] % 2 == 0)
    {
       ifreq1++;
    }
    else
    {
      ifreq2++;
    }
  }

  return ifreq1-ifreq2;


}
int main()
{
  int iLength = 0,iRet= 0,iCnt = 0;
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

   iRet = CountEvenOddDif(p,iLength);

   printf("Frequency of even elements is : %d",iRet);
  free(p);

  return 0;
}