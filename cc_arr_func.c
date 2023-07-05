#include <stdio.h>
#include<ctype.h>
void modifySent(char *);

int main()
{
    char *sent="Rasna kalsi IS MY namE";
    puts("Original string :");
    printf("%s \n",sent);

    modifySent(sent);

    puts("Modified string");
    printf("%s\n",sent);
}

void modifySent(char *s)
{
  //int length=strlen(s);
  //int x;
  while(*s)
  { 
    printf("Entered while loop");
    if(islower(*s))
      *s=toupper(*s);
    else if(isupper(*s))
      *s=tolower(*s);
    else if(*s==' ')
      *s='_';
    else
      *s=*s;
    
    s++;
  }

  printf("\n Exited while loop");
}/*end of fn modifySent*/