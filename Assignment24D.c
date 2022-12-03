#include<stdio.h>

void  Convert(char ch)
{
    if((ch >= 'a' &&  ch <= 'z')  )
    {  
      while(ch!=123)
      {
        printf("%c\t",ch);
        ch++;
      } 
    }
    else if((ch >= 'A' &&  ch <= 'Z')  )
    {
      while(ch!=91)
      {
        printf("%c\t",ch);
        ch++;
      } 
    }
    else
    {
      printf("%c",ch);
    }
}

int main()
{
  char cValue = '\0';
  

  printf("Enter the character\n");
  scanf("%c",&cValue);

  Convert(cValue);
  
  
  return 0;
}