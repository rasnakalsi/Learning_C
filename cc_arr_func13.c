#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>
#include <string.h>

void modifySent(char *);

int main()
{
    char sent[]="Rasna kalsi IS MY namE";
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
  printf("\nInside modifysent fn\n");
  for(x=0;x<length;x++)
  {  
    if(islower(s[x]))
      s[x]=toupper(s[x]);
    else if(isupper(s[x]))
      s[x]=tolower(s[x]);
    else if(s[x]==' ')
      s[x]='_';
    else
      s[x]=s[x];
    
  }
printf("Modified string is %s",s);


}
 