#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cChar)
{
  if(islower(cChar))
  {
    printf("%c",toupper(cChar));
  }
  else if(isupper(cChar))
  {
    printf("%c",tolower(cChar));
  }
    
}


int main()
{
   char cValue = '\0';

   printf("Enter character\n");
   scanf("%c",&cValue);

   DisplayConvert(cValue);

  return 0;
}