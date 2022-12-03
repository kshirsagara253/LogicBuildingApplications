#include<stdio.h>
#include<stdlib.h>

void  ThreeDigitNUmber(int Arr[], int iSize)
{
  int iCnt = 0;
  for(iCnt = 1;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
    {
      printf("%d\t",Arr[iCnt]);
    }    
  }
  
}
int main()
{
  int iLength = 0,iCnt = 0;
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

  ThreeDigitNUmber(p,iLength);
  
   
  free(p);

  return 0;
}