#include<stdio.h>
#include<stdlib.h>

int  product(int Arr[], int iSize)
{
  int iCnt = 0;
  int iMult = 1;
  
  
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt] % 2 == 1)
    {
       iMult = iMult * Arr[iCnt];
    }    
  }
  return iMult;
}
int main()
{
  int iLength = 0,iCnt = 0;
  int *p = NULL;
  int iRet =0;
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

  iRet = product(p,iLength);
  printf("product odd of elements is %d",iRet);
   
  free(p);

  return 0;
}