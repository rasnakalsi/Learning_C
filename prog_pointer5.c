#include <stdio.h>
char * encrypt(char *input);
int main(void)
{
    char *instructions="Deliver this package to Berlin";
    printf("Here are your secret instructions %s",encrypt(instructions));
    return 0;


}

char * encrypt(char *input)
{
   static char output[100];
   int x=0;
   while(*input)
   {
     if(isalpha(*input))
       output[x]=*input+1;
     else
       output[x]=*input;

     input++;
     x++;
   }
   return output;


}