#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

void populate(int a[]);
void showArray(int *a);
void sortArray(int *a);
int compare(const void *,const void *);
int main(void)
{
   int numbers[SIZE];

   /*POPULATE ARRAY*/
   populate(numbers);

   /*Display unsorted array*/
   puts("Unsorted array: ");
   showArray(numbers);

   /*sort array*/
   puts("Sorting array");
   sortArray(numbers);

   /*Display sorted array*/
   puts("Sorted Array");
   showArray(numbers);

   return 0;

}

void populate(int numbers[])
{
   int x;
   srand((unsigned)time(NULL));
   for(x=0;x<SIZE;x++)
     numbers[x]=rand()%100+1;


}

void showArray(int *n)
{
   int x;
   for(x=0;x<SIZE;x++)
     printf("%3d",n[x]);

    putchar('\n');


}

void sortArray(int *n)
{

  qsort(n,SIZE,sizeof(int),compare);

}

int compare(const void *a,const void *b)
{

  return(*(int *)a-*(int *)b);

}