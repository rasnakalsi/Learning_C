#include <stdio.h>
#include <string.h>

int main()
{
  char firstname[20];
  int i=0;
  fgets(firstname,20,stdin);
  puts(firstname);
  printf(" has %d characters\n ",strlen(firstname));
  char lastname[20];
  fgets(lastname,20,stdin);
  printf(" has %d characters \n",strlen(lastname) );
  char fullname[50];
  
  for(i=0;i<strlen(firstname)-1;i++)
     fullname[i]=firstname[i];

  fullname[i]="\0";
  
  //strcpy(fullname,firstname);
  strcat(fullname,lastname);
  puts(fullname);

  return 1;


}