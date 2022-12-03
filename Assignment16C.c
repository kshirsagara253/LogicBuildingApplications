#include<stdio.h>
#include<stdlib.h>

int  CheckFreq(int Arr[], int iSize ,int iNo)
{
  int iCnt = 0;
  int ifreq = iSize;
  
  
  for(iCnt = iSize;iCnt>=0;iCnt--)
  {
    if(Arr[iCnt]  == iNo)
    {
       return iCnt;
    }    
  }
  return -1;
}
int main()
{
  int iLength = 0,iCnt = 0;
  int *p = NULL;
  int iRet =0;
  int iValue = 0;

  printf("Enter number of elements\n");
  scanf("%d",&iLength);

  printf("Enter the NO to check from elements \n");
  scanf("%d",&iValue);


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

  
  iRet = CheckFreq(p,iLength,iValue);
  printf(" %d",iRet);
   
  free(p);

  return 0;
}