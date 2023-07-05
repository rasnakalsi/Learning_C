#include <stdio.h>
int* init_array()
{
    static int *a1={2,3,5,7,11};
    printf("Size of array is %d \n",sizeof(a1));
    return a1;
}
int main()
{  
   int *arr1,i;
   arr1=init_array();
   for(i=0;i<sizeof(arr1);i++)
     printf("arr1[%d]= %d\n",i,arr1[i]);

    return 0;
}