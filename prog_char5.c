#include <stdio.h>
int iscaps(char); //fn prototype
int main()
{
   int c;
   do
   {
        c=getchar();
        if(iscaps(c))
            putchar(c);
   } while (c!='\n');

   return 0;

}

int iscaps(char c)
{
    if(c<'A'||c>'Z')
        return 0;
    return 1;


}