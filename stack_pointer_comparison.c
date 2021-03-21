/* To create Stack, we needed two functions,
push() and pop().
push() function put value on top of stack and
pop() function takes value off. */
/* These routines are shown here to simple main function to drive them */
/* The program puts the value enter into the stack.
If you enter 0, value is popped from the stack. */
/* To stop the program,enter -1 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

void push(int i);
int pop(void);

int *tos,*p1,stack[SIZE];

int main()  {
    int vlaue;
    tos = stack; /* tos points to the top of stack */
    p1=stack;  /* initalize p1 */

    do
    {
        printf("Enter Value : ");
        scanf("%d",&vlaue);

        if(vlaue != 0)  
            push(vlaue);
        else 
            printf("vlaue on the top is %d \n",pop());
        /* code */
    } while (vlaue != -1);

    return 0;
}

void push(int i)    {
    p1++;
    if(p1 == (tos + SIZE))  {
        printf("Stack Overflow \n");
        exit(1);
    }

    *p1 = i;
}

int pop(void)   {
    if(p1 == tos)   {
        printf("Stack Underflow\n");
        exit(1);
    }
    
    p1--;

    return *(p1+1);
}