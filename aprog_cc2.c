#include <stdio.h>
int main(int argc,char *argv[])
{   int x;
    if(argc>1)
    {    
        printf("You have typed the following arguments \n");
        for(x=1;x<argc;x++)
          printf("argv[%d]=%s\n",x,argv[x]);
    }
    else
        printf("You have not given any command line arguments");

    
    return 0;



}