#include<stdio.h>
int main()
{
    int x=0;
    while(1)
    {
        printf("I am looping endlessly %d \n",x);
        if(x>10)
            break;
        x++;

    }

    return 0;


}