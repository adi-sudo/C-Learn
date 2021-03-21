/* check() can be made to check of either 
alphabatical equality or numerical equality. */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void check(char *a,char *b,int (*cmp)(const char*,const char*));
int compvlaues(const char *a,const char *b);

int main()  {
    char s1[80],s2[80];
    printf("Enter two values or strings\n");
    gets(s1);
    gets(s2);

    if(isdigit(*s1))    {
        printf("Testing values for equality \n");
        check(s1,s2,compvlaues);
    }
    else    {
        printf("Testing stirngs for equality\n");
        check(s1,s2,strcmp);
    }

    return 0;
}

void check(char *a,char *b,int (*cmp)(const char*,const char*)) {
    if(!(*cmp)(a,b)) printf("equal");
    else printf("not equal");
}

int compvlaues(const char *a,const char*b)  {
    if(atoi(a) == atoi(b)) return 0;
        else return -1;
}