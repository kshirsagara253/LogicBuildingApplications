

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
      printf("small");
    }
    else if(iNo >= 100)
    {
      printf("large");
    }
    else
      {
        printf("Medium");
      }
    
}

int main()
{
  int iValue = 0;
 
  printf("Please enter number :\n");
  scanf("%d",&iValue);

  Number(iValue);
  



  return 0;
}