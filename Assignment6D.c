#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
   int iMult = 0;
     if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
     {
        iMult = 0;
     }
      
    iMult = iNo1*iNo2;
    iMult = iMult*iNo3;

    return iMult;
 
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  int iValue3 = 0;
  int iRet = 0;
  printf("Enter the Three numbers :\n");
  scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
  iRet = Multiply(iValue1,iValue2,iValue3);
  
  printf("%d",iRet);
  



  return 0;
}