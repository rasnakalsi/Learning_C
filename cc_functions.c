#include <stdio.h>
void evaluate(int); //fn declaration
int main()
{
   int num; 
   printf("Enter the integer value you want to check:");
   scanf("%d", &num);
   evaluate(num);


}

void evaluate(int n)
{
  if(n<10)
    printf("Value %d is <10",n);
  else if (n>10)
    printf("Value %d is >10",n);
  else
    printf("Value %d is equal to 10",n);
  return;

}