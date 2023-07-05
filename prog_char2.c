#include <stdio.h>
#include <ctype.h>
int main()
{
    int acter;
    do
    {
        acter=getchar();
        if(isdigit(acter)) //u can replace isdigit by isalpha to see fn of isalpha 
            putchar(acter);
    } while (acter!='\n');

    return 0;

}