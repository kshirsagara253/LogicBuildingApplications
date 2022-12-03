
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
  int i,j=0;
  int iCnt = 1;
   char ch = 'a';

  for(i=1;i<=iRow;i++)
  {   
   iCnt = 1;
     ch = 'a'; 
     for(j=1;j<=iCol;j++)
     {  

      
      if(i % 2 == 0)
        {
           printf("%d\t",iCnt);
           iCnt++;
        }
        else
        {
           printf("%c\t",ch);
           ch++;
        }

       
        


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