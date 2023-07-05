#include <stdio.h>
#define INPUT_MAX 16
int main()
{
    char input[INPUT_MAX];
    printf("Enter your name");
    fgets(input,INPUT_MAX,stdin);
    puts("Thank you for registering ");
    puts(input);
    return 0;



}