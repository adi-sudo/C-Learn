/* C programmers commonly initalize char* pointers to point to string constants
char *p = "hello world";
Since p is not an array,it can't be stored in p.
The C compiler creates what is called as string table,
which store the string constants used by the program. */

/*Through the program p  can be used like any other string. */

#include <stdio.h>
#include <string.h>

int main()  {
    register int t;
    char *p;
    printf("Enter your name : ");
    gets(p);

    /* Print the string forward then backward */
   // printf(p);
    printf ("\nHello\t");
    
    for(t = strlen(p)-1; t > -1;t--)    
        printf("%c",p[t]);
    
    getch();
    return 0;
}