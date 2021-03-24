/* The information assign in one structure can be
assign to another of the same type using 
single assignment statement. */

#include <stdio.h>

int main()  {
    struct 
    {
        int a;
        int b;
        /* data */
    }x,y;
    
    x.a=10;

    y=x; /* assign one structure to another */

    printf("%d",y.a);

    return 0;
}