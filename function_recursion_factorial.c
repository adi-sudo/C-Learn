/* Factorial of a number n is the product of all the natural number between 1 and n  */

/* Nonrecursive or iterative facti(),
uses a loop that run from 1 to n and 
prograssviely multiplies each number by moving product.  */

/* Recursive function is factr() function,
When factr() is called with the argument 1,it returns 1.
Otherwise,it returns factr(n-1)*n. */

/* Recursive function, must have a conditional statement 
somewhare to force the function to
 return without recursive call being executed. */

#include <stdio.h>

int factr(int n);
int facti(int n);

int main()  {
    int num = 3;

    /* 3*2*1= 6  */
    printf("Factor of %d using iteration is : %d\n",num,facti(num));
    printf("Factor of %d using recursion is : %d\n",num,factr(num));

    return 0;
}

/* Recursive */
int factr(int n)    {
    int answer ;

    if(n == 1)
        return 1;
    
    answer = factr(n-1)*n; /* recursive function */
    return answer;
}

/* Non-Recursive or Iterative */
int facti(int n)    {
int t,answer;
answer = 1;

for(t=1; t <= n;t++)    {
    answer = answer*t;
}
return answer;
}