#include <stdio.h>
#include <string.h>

int main()
{
   char first[]="Rasna\"kalsi";
   char second[]="Kalsi";
   printf("%s + %s",first,second);
   printf("\nLength of %s is %d",first,strlen(first));
   printf("\n%s",first+second);
   return 1;



}