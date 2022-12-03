#include<stdio.h>
#include<stdlib.h>

void  SumOFDigitNUmber(int Arr[], int iSize)
{
  int iCnt = 0;
  int iDigit = 0;
  int iSum = 0;
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    iDigit = 0,iSum = 0;
    while(Arr[iCnt] != 0)
    {
      iDigit = Arr[iCnt] % 10;
      iSum = iSum + iDigit;
      Arr[iCnt] = Arr[iCnt]/10;
    }   
    printf("%d\t",iSum); 
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

  SumOFDigitNUmber(p,iLength);
  
   
  free(p);

  return 0;
}