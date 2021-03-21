/*It print Hello and name on your screen , 
If you specify your name as command line argument */
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])  {
    if(argc != 2) {
        printf ("You forgot to type your name ");
        exit(1);
    }
    printf("Hello! %s ",argv[1]);
    return 0;
}