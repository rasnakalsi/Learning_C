#include<stdio.h>
#include <stdlib.h>
int main()
{ 
    int *m;
    m=(char*)malloc(sizeof(int)*10);

    if(m==NULL)
    {
        puts("Memory allocation error occured");
        return 1;
    }
    else
        puts("Memory allocated succesfully ");

    *(m+0)=20;
    printf("m is assigned %d\n",*m);
    printf("m is %p and m+1 is %p",m,m+1);
    printf("Size of integer is %d",sizeof(int));

    return 0;



}