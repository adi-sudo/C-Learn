/* Program first allocates 37 chracters copies the string 
"This is Dynamic allocation function" into them and
uses realloc() to increase the size to 38 in order to 
place a period at end. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()  {
    char *p;
    p = malloc(37);
    if(!p)  {
        printf("Alloctaion Error");
        exit(1);
    }

    strcpy(p,"This is Dynamic Function");

    printf(p);
    printf("\n");
     
    p = realloc(p,38);

    if(!p)  {
        printf("Alloctaion Error");
        exit(1);    }
    
    strcat(p,".");

    printf(p);
    free(p);

    return 0;
}