#include <stdio.h>
int main()
{
    int c;
    printf("Enter num choice(1,2,3):");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            puts("Red");
            break;
        
        case 2:
            puts("Green");
            break;

        case 3:
            puts("Blue");
            break;

        default:
            puts("Invalid input");

    }// end of switch statement

}