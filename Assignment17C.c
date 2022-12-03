#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
  int iCnt = 0;
  int iNo1 = 0;
  int iNo2 = Arr[0];
  
  
  for(iCnt = 1;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt] < iNo2)
    {
       iNo2 = Arr[iCnt];
    }    
    else if(Arr[iCnt] > iNo1)
    {
      iNo1 =Arr[iCnt];
    }
  }
  return iNo1-iNo2;
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

  iRet = Difference(p,iLength);
  printf("Diiference Largest and smallest elements is %d",iRet);
   
  free(p);

  return 0;
}