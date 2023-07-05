#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int r;
    srand((unsigned)time(NULL));
    r=rand();
    printf("%d is a random number",r);
    return(0);


}