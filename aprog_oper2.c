#include<stdio.h>
int main()
{
   int a;
   char *classification;
   printf("Enter your age : ");
   scanf("%d",&a);
   classification=(a<16)?"kid":(a>65?"Senior":"Adult");
   printf("\nYou are classified as %s \n",classification);
   //printf("\nYour age %d falls under %s category",a,classification);
   return 1;

}
