#include <stdio.h>
#include <string.h>
int main()
{
   char input[64];
   int len;
   printf("Instructions : ");
   fgets(input,64,stdin);
   len=strlen(input);
   printf("\n Instructions you typed are as follows.\n ");
   printf("%s",input);
   printf("\n\nYou typed %d characters in instruction \n",len);




}