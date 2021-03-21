/* Multidimensional array dynamically allocated array */

/* Program builds the table 1 to 10 raised to their first , second , third and fourth powers */

#include <stdio.h>
#include <stdlib.h>

int pwr(int a,int b);

int main()  {
    /* Declare a pointer to an array that has 10 ints in each row. */
    int (*p)[10];
    register int i,j;

    /* Allocate memory to hold 4*10 array */
    p = (int (*)[10])malloc(40*sizeof(int)); /*cast to (int (*)[10])*/

    if(!p)  {
        printf("Memory requested failed \n");
        exit(1);
    }

    for(j=1;j<11;j++)
        for(i=1;i<5;i++)
            p[i-1][j-1] = pwr(j,i);
    
    for(j=1;j<11;j++)   {
        for(i=1;i<5;i++)
            printf("%10d",p[i-1][j-1]);
            printf("\n");
    }
    return 0;
}

/* Rise an integer to specified power */
pwr(int a,int b)    {
    register int t=1;

    for(;b;b--)
        t=t*a;

    return t;
}