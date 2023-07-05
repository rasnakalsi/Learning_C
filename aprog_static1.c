#include <stdio.h>
void f()
{
   static int x;
   x=0;
   printf("The value of x is %d\n",x);
   x++;
   printf("The value of x is %d\n",x);
   

}

int main()
{
  f();
  f();
  return 0;



}