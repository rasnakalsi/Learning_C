#include <stdio.h>
int main()
{
    int array[]={10,20,30,40};
    int x;
    int *aptr;
    aptr=array;

    puts("Using array indexes to print array elements");
    for(x=0;x<4;x++)
        printf("Element %d: %d\n",x+1,array[x]);

    printf("Using aptr(integer pointer) to access array elements\n");
    for(x=0;x<4;x++)
        printf("Element %d:%d\n",x+1,*aptr++);
    
    puts("Printing 3 element using aptr");
    aptr=array;
    printf("Third element is %d \n",*(aptr+3));

    puts("Priting 3rd element using array index");
    printf("Third element is %d\n",array[3]);

    return 1;

}