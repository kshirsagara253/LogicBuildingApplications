#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize ,int iNo1,int iNo2)
{
  int iCnt = 0;
  
  
  
   for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2)
    {
       printf("%d\t",Arr[iCnt]);
    }    
  }
  
}
int main()
{
  int iLength = 0,iCnt = 0;
  int *p = NULL;
  int iValue1 = 0;
  int iValue2 = 0;

  printf("Enter number of elements\n");
  scanf("%d",&iLength);

  printf("Start :  ");
  scanf("%d",&iValue1);

  printf("End :  ");
  scanf("%d",&iValue2);

  if(iValue1>iValue2)
  {
     printf("Invalid range");
     return -1;
  }

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

  
  Range(p,iLength,iValue1,iValue2);
  
   
  free(p);

  return 0;
}