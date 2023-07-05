#include <stdio.h>
#include <string.h>
int main()
{
  int num;
  
  printf("Enter the number :");
  scanf("%d",&num);
  printf("You have entered %d ",num);
  //char out[10];
  //strcpy(out,(num%2)?"odd":"even");
  char out[]=(num%2)?"odd":"even";
  //char *out=(num%2)?"odd":"even";
  //printf(" 1. the number is %s",out);
  // printf("and the number is %s",(num%2)?"odd":"even");
  //char out[]="odd";
  printf("%s",out);
  return 1;



}