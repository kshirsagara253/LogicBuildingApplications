#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
  int iCnt = 0;
  printf("Elements Divisible by 5 and 3 are :");
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 3 == 0)
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

   Display(p,iLength);

  free(p);

  return 0;
}