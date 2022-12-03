#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iSize)
{
  int iCnt = 0;
  
  for(iCnt = 0;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt]  == 11)
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

   bRet = Check(p,iLength);

   if(bRet == TRUE)
   {
     printf("11 is present");
   }
   else
   {
    printf("11 is Not present");
   }

   
  free(p);

  return 0;
}