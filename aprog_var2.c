#include <stdio.h>
void f(void);
int x;
int main()
{
   x=0;
  printf("Inside the main() fn x=%d\n",x);
  f();
  printf("Inside the main() fn x=%d\n",x);
  return 1;

}

void f()
{
  x=-1;
  printf("Inside f() fn value of x=%d\n",x);


}