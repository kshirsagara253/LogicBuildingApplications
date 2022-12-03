#include<stdio.h>

void DisplaySchedule(char ch)
{
  if(ch == 'a' || ch == 'A')
  {
    printf("Your exam at 7 AM");
  }
  else if(ch == 'b' || ch == 'B') 
  {
    printf("Your exam at 8.30 AM");
  }
  else if(ch == 'c' || ch == 'C') 
  {
    printf("Your exam at 9.20 AM");
  }
  else if(ch == 'd' || ch == 'D') 
  {
    printf("Your exam at 10.30 AM");
  }
  else
  {
    printf("Invalid Division");
  }
}

int main()
{
  char cValue = '\0';
  
  printf("Enter Your Division\n");
  scanf("%c",&cValue);

  DisplaySchedule(cValue);

 
  return 0;
}