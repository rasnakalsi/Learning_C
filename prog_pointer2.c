#include <stdio.h>
void minus10(int *v);
int main()
{
    int value=100;
    printf("Value is %d \n",value);
    minus(&value);
    printf("Value is %d \n",value);
    return 1;

}

void minus(int *v)
{
  *v=*v-10;


}