/*To access the target value indirectly pointed to by a pointer,
we must apply the asterick opertor twice */

#include <stdio.h>
int main()  {
    int x,*p,**q;
    x = 10;
    p = &x;
    q = &p;
    printf("%d",**q);/* print the value of x */
    return 0;
}