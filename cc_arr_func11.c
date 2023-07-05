#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>
#include <string.h>

void modifySent(char *);

int main()
{
    char *sent="Rasna kalsi IS MY namE";
    puts("Original string :");
    printf("%s \n",sent);
    printf("Length of string is %d",strlen(sent));
    modifySent(sent);

    puts("Modified string");
    printf("%s\n",sent);
}

void modifySent(char *s)
{
  int length=strlen(s);
  int x;
  for(x=0;x<length-1;x++)
  {  
    if(islower(*s))
      *s=toupper(*s);
    else if(isupper(*s))
      *s=tolower(*s);
    else if(*s==' ')
      *s='_';
    else
      *s=*s;
    
  }

}
 