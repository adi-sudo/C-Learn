/* Function Arguments */

/* Program displays all the arguments with which it was called,
one character at a time. */

#include <stdio.h>

int main(int argc,char *argv[] )    {
    int i,t;
    for(t=0;t<argc;++t) {
        i=0;
        while(argv[t][i])   {
            putchar(argv[t][i]);
            ++i;
        }

        printf("\n");
    }

    return 0;
}