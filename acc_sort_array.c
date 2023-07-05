#include <stdio.h>
#define SIZE 20
int main()
{
  char string[SIZE]="rasna kalsi";
  int inner,outer;
  char temp;
  puts("Unsorted string : ");
  puts(string);
  int length=strlen(string);
  printf("Length of string is %d\n",length);

  for(outer=0;outer<length;outer++)
   {  
     for(inner=outer+1;inner<length;inner++)
     {
       if(string[outer]>string[inner])
       {
          temp=string[inner];
          string[inner]=string[outer];
          string[outer]=temp;


       }
     }
   }

  puts("Sorted String ");
  puts(string);


}