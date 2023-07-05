#include <stdio.h>
void f(void);
int main()
{
  int x=0;
  printf("Inside the main() fn x=%d\n",x);
  f();
  printf("Inside the main() fn x=%d\n",x);
  return 1;

}

void f()
{
  int x=-1;
  printf("Inside f() fn value of x=%d\n",x);


}