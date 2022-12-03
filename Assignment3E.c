#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
bool Vowel(char cChar)
{
   if(isupper(cChar))
   {
    cChar = tolower(cChar);
   }
  if(cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u')
  {
    return true;
  }
  else 
  {
    return false;

  }
    
}


int main()
{
   char cValue = '\0';
  bool bRet = false;
   printf("Enter character\n");
   scanf("%c",&cValue);

  bRet = Vowel(cValue);

  if(bRet == true)
  {
    printf("TRUE\n");
  }
  else
  {
    printf("FALSE\n");
  }

  return 0;
}