#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL CheckFreq(int Arr[], int iSize ,int iNo)
{
  int iCnt = 0;
  int ifreq = 0;
  
  
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt]  == iNo)
    {
       return TRUE;
    }    
  }
  return FALSE;
}
int main()
{
  int iLength = 0,iCnt = 0;
  int *p = NULL;
  BOOL bRet = FALSE;
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

  
  bRet = CheckFreq(p,iLength,iValue);
  if(bRet == TRUE)
  {
    printf("%d is present",iValue);
  }
  else
  {
    printf("%d is not present",iValue);
  }
  
   
  free(p);

  return 0;
}