#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter value for variable(a): ");
    scanf("%d",&a);
    printf("Enter value of variable b : ");
    scanf("%d",&b);

    printf("You have entered a=%d, b=%d",a,b);
    printf("\nLarger number is %d",a>b?a:b);
    return 1;




}