

#include<stdio.h>

void Display(int iNo)
{   
    if(iNo < 0)
    {
      iNo = -iNo;
    }
    if(iNo > 9)
    {
      printf("Invalid Number\n");
      return;
    }
    if(iNo == 0)
    {
      printf("zero");
    }
    else if(iNo == 1)
    {
      printf("one");
    }
   
    else if(iNo == 2)
    {
      printf("Two");
    }
    else if(iNo == 3)
    {
      printf("Three");
    }
    else if(iNo == 4)
    {
      printf("Four");
    }
    else if(iNo == 5)
    {
      printf("Five");
    }
    else if(iNo == 6)
    {
      printf("Six");
    }
    else if(iNo == 7)
    {
      printf("Seven");
    }
    else if(iNo == 8)
    {
      printf("Eight");
    }
    else if(iNo == 9)
    {
      printf("Nine");
    }
}

int main()
{
  int iValue = 0;
 
  printf("Please enter number :\n");
  scanf("%d",&iValue);

  Display(iValue);
  



  return 0;
}