
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
  int i,j=0;
  char ch;
  

  for(i=1;i<=iRow;i++)
  {   
     ch = 'A';
     for(j=1;j<=iCol;j++)
     {
        printf("%c\t",ch);
        ch++;
     }
     
    printf("\n");
  }

}

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   
   printf("Enter the Number of rows and coloumns\n");
   scanf("%d%d",&iValue1,&iValue2);
   Pattern(iValue1,iValue2);

   return 0;
}