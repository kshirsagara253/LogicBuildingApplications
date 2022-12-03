#include<stdio.h>
#include<stdlib.h>

int  CheckFreq(int Arr[], int iSize)
{
  int iCnt = 0;
  int ifreq = 0;
  
  
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt]  == 11)
    {
       ifreq++;
    }    
  }
  return ifreq;
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

  iRet = CheckFreq(p,iLength);
  printf("Frequency of 11 is %d",iRet);
   
  free(p);

  return 0;
}