#include <stdio.h>
int main()
{
  int x;
  printf("Enter a number : ");
  scanf("%d",&x);
  int result=x*5;
  printf("%d * 5 = %d\n",x,result);
  //result/=3;
  x=result/3;
  printf("x=%d",x);
  printf("%d / 3 = %d %d\n",result,result/3,x);
  return 1;

}