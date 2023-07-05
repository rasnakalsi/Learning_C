#include <stdio.h>
#include <ctype.h>
void shouting(char *);
int main()
{
    char string[64];
    printf("Type some text: \n");
    fgets(string,64,stdin);
    printf("You typed:\n%s\n",string);
    shouting(string);
    printf("Your text after capitalisation of all chars:\n%s\n",string);
    return 0;



}

void shouting(char *s1)
{
  while(*s1)
  {
    *s1=toupper(*s1);
    s1++;
  }

}