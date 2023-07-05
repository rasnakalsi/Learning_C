#include <stdio.h>
int main()
{
  int i;
  puts("Using for loop");
  for(i=1;i<=20;i++)
    printf("%d \n",i);

  i=-10;
  printf("\n");
  puts("Using while loop");
  while(i<=10)
  {
    printf("%d\t",i);
    i=i+2;

  }
  
  return 0;

}