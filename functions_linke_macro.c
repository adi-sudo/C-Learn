/* Function like macro */

/* The use of function like macro has one major benefit,
it increase the speed of the code as their is no function overhead. 
However,if function size is very large,because of the duplicated code 
the size of the program increases */

#include <stdio.h>

#define ABS(a) a < 0 ? -a : a

int main()  {
    printf("Absloute of -1 and 1 is : %d  %d",ABS(-1),ABS(1));

    return 0;
}
