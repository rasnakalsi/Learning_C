#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate(void);

int main(void)
{
  int *a;
  int x;
  puts("Here are 10 random numbers: ");
  a=generate();
  for(x=0;x<10;x++)
    printf("%3d ",a[x]);
  putchar('\n');

}

int *generate(void)
{
   int x;
   static int a[10];
   srand((unsigned)time(NULL));
   for(x=0;x<10;x++)
   {
     a[x]=rand()%100+1;
     //printf("%3d",a[x]);
    
   }

    return a;



}