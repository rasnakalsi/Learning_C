#include <stdio.h>
int main()
{
   char c;
   printf("Your choice (A,B,C): ");
   scanf("%c",&c);

   switch(c)
   {
      case 'A':
      case 'a':
         puts("Excellent choice");
         //break;
    
      case 'B':
      case 'b':
         puts("This is the most common choice ");
         //break;

      case 'C':
      case 'c':
         puts("I question your decision!! ");
         //break;

      default:
         puts("Invalid choice");
         
   }

   return 0;

}