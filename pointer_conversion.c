/* The conversion of one type of pointer may create undefined behaviour */
/* Program that attempts to assign the value of x and y,through 
the pointer p.This program compiles without error,
but does not produce desired result */

#include <stdio.h>

int main()  {
    double x=100.1 , y;
    int *p;
/*p (which is an interger pointer) to a double */
p = (int *) &x; /*Explicit Casting*/

/* Does not operate as expected */
y = *p; /*Attempt to assign y value x through p */

/* Statement won't output 100.1 */
printf("The (incorrect) value of x is : %f ",y);

return 0;

}