#include <stdio.h>
int main()
{
   int a;
   printf("Enter value of a : ");
   scanf("%d",&a);
   if(a>10)
   {
     printf("You entered %d \n",a);
     printf("Value of %d is > 10 \n",a);

   }
   else if(a<10)
   {
    printf("You entered %d \n",a);
    printf("Value of %d is <10 \n",a);

   }
   else
   {
    printf("You entered %d \n",a);
    printf("%d is equal to 10\n ",a);

   }
   return 0;


}