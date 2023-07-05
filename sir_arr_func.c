#include <stdio.h>
#include <ctype.h>
void modify(char *s);
int main(void)
{
  char name[]="Rasna Kalsi is my name.";
  printf("Original string :%s ",name);

  modify(name);
  printf("Modified string :%s",name);
 
  return 0;

}

void modify(char *s)
{
  while(*s)
  {
    *s=toupper(*s);
    if(*s==' ')
       *s='_';
    
    s++;

  }
}//end of modify fn