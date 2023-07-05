#include <stdio.h>
char * repeat(char c)
{
  int x;
  static char string[32];
  for(x=0;x<31;x++)
  {
     string[x]=c;
  }
  string[x]='\0';
  printf("inside fn String is %s\n",string);

  return string;


}

int main()
{
   char c;
   printf("Type a char :");
   scanf("%c",&c);
   printf("You have entered %c\n",c);
   printf("The newly formed string is %s",repeat(c));

   return 0;


}