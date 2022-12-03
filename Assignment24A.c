#include<stdio.h>

void DisplayASCII()
{
   int iCnt = 0;
   char ch = '\0';
   
   for(ch = 1 ; ch < 127 ; ch++)
   {
        printf("%c   %d\t",iCnt,ch);
        iCnt++;
      
   }

}

int main()
{
  DisplayASCII();
  return 0;
}