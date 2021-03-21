/* The program compares to string entered by user.
Pay close attention to decleration of check() and the function pointer p, inside main(). */

/* First, the decleration of p in main(),
int (*p)(const char*,const char*);
it tells the compiler that p is a pointer to a function 
that has two const char* parameters and returns an int result.
The pharntheses around p are neccessary in interpret this decleration.
We must use similar form when declaring other function pointers,
aulthough the return type and parameters differ.
Next, check() function,
it declare three paramenters : two character pointers a and b, and 
one function pointer cmp.Thus,cmp is able to recive a pointer to a function
that takes two const char* arguments and returns int result. */

/* When the programe begins,it assign p the address of strcmp(),
the standard string comparasion function.
Next, prompt the user for two string and then it passes pointers 
to those string along p to check(),which compares the string for equality.
Inside check(),(*cmp(a,b));
calls strcmp(),which is pointed by cmp,with the arguments a and b. */

#include <stdio.h>
#include <string.h>

void check(char *a,char *b,int (*cmp)(const char*,const char*));

int main()  {
    char s1[80],s2[80];
    int (*p)(const char*,const char*); /* pointer function */
    p = strcmp; /* assign address of strcmp to p */
    printf("Enter two strings\n");
    gets(s1);
    gets(s2);

    check(s1,s2,p); /* pass address of strcmp via p */
    return 0;
}

void check(char *a,char *b,int (*cmp)(const char*,const char*)) {
    printf("Testing for equality :\n");
    if(!(*cmp)(a,b))
        printf("Equal");
    else 
        printf("Not Equal");
}