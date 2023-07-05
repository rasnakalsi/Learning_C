#include <stdio.h>2
#include <math.h>
int main()
{
  float a,b;
  printf("Enter value of a and b \n");
  scanf("%f ",&a);
  scanf("%f",&b);
  printf("%f + %f= %f \n",a,b,a+b);
  printf("%f - %f= %f\n",a,b,a-b);
  printf("%f * %f= %f\n",a,b,a*b);
  printf("%f / %f= %f\n",a,b,a/b);
  printf("%f ^ %f= %f\n",a,b,pow(a,b));
  printf("square root of %f is %f \n",a,sqrt(a));
  printf("square root of %f is %f \n",b,sqrt(b));
  return 0;
  
}