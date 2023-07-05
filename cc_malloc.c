#include <stdio.h>
#include <stdlib.h>
#define SIZE 60
int main(void)
{
    char *input=malloc(sizeof(char)*SIZE);
    if(input==NULL)
    {
      puts("Memory Allocation failed!");
      return 0;

    }
    puts("Enter your name");
    fgets(input,SIZE,stdin);
    printf("Hello %s\n",input);
    return 1;

}