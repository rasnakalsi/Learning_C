#include <stdio.h>
#include <string.h>

int main()
{
    char first[]="Rasna kalsi ";
    char second[]=" is learning C language";
    char buffer[60];
    strcpy(buffer,first);
    puts(buffer);
    printf("Length of buffer after copying first string is : %d \n",strlen(buffer));
    strcat(buffer,second);
    printf("Final length of buffer is %d",strlen(buffer));
    puts(buffer);
    return 0;



}