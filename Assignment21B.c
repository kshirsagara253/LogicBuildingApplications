
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
  int i,j=0;
  int iCnt = 0;
 
  

  for(i=1;i<=iRow;i++)
  {   
          if(i % 2 == 0)
        {
           iCnt = 1;
        }
        else
        {
         iCnt = 2;
        }

     for(j=1;j<=iCol;j++)
     {  
       
        printf("%d\t",iCnt);
        iCnt= iCnt + 2;
        
        

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