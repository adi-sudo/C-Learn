/* This program is wrong */

/* It prints the unknown value because of the assignment,
 p = x;
 However, p is supposed to contained address not vlaue.
 p = &x; */

#include <stdio.h>

int main()  {
    int x,*p;
    x= 10;

    p = x; /* wrong vlaue */

    printf("%d",*p);

    return 0;
}
