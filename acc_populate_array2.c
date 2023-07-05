#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int *);

int main(void)
{
  int a[10];
  int x;
  puts("Here are 10 random numbers: ");
  generate(a);
  for(x=0;x<10;x++)
    printf("%3d ",a[x]);
  putchar('\n');

}

void generate(int *arr)
{
   int x;
   srand((unsigned)time(NULL));
   for(x=0;x<10;x++)
   {
      arr[x]=rand()%100+1;
   }
}