/* Program illustrates very dangereous type of bug. */

/* This program uses p1 to print the ASCII value associated 
with the characters contained in s.
The problem is that p1 is assigned to the address of s only once , outside of loop
However, second time though, it continue where it left off 
because it is not reset to start of s.
The next character may be the part of second string,another variable or peice of program */

/* The proper way to writ in program 
each time loop iterates, p1 is set to start of the string. */

/* In general, we should remember to 
reinitalize a pointer if it is to be resused */

#include <stdio.h>
#include <string.h>

int main()  {
    char *p1;
    char s[80];

    p1 = s; /* Wrong , remove this statement */

    do
    {
        gets(s); /* read  a string */

        /* print the decimal equivalent of each character */
        while(*p1) printf("%d",*p1++);
    } while (strcmp(s,"done"));

    return 0;
    
}