#include<stdio.h>
int main()
{
   int a;
   char *classification;
   printf("Enter your age : ");
   scanf("%d",&a);
   classification=((a<16)?"kid":(a>65?"Senior":"Adult"));
   printf("You are classified as %s",*classification);
   //printf("\nYour age %d falls under %s category",a,classification);
   return 1;

}
