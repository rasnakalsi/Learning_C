#include <stdio.h>
#include <math.h>
int main(void)
{
  int a;
  float aroot;
  printf("Type an integer : ");
  scanf("%d",&a);
  //aroot=sqrt(a);
  aroot=sqrt(abs(a));

  printf("The square root of %d is %f \n",a,aroot);
  return(0);




}