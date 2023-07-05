#include <stdio.h>
#include <string.h>
char *larger(char *,char *);
int main(void)
{
    char *s1="Rasna kalsi Ruhi kalsi";
    char *s2="Mehtaab kaur";
    char *result;
    result=larger(s1,s2);
    printf("String '%s' is larger \n",result);
    return 0;



}

char * larger(char *s1,char *s2)
{
  if(strlen(s1)>strlen(s2)) return s1;
  else
    return s2;

}