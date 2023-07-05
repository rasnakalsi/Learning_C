#include <stdio.h>
int main(void)
{
    int age;
    char *class;
    age=20;
    class= age<16?"kid":(age>65)?"Senior":"Adult";
    printf(" At age %d you are %s ",age,class);
    return 9;



}