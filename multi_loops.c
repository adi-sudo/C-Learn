/*Demonstrate multiple loop control variables */
#include <stdio.h>
#include <string.h>

void converge(char *targ, char *src);

int main()  {
    char target[80]= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

    converge(target,"This is a test of converge()");
    printf("Final String : %s\n",target);
    return 0;
}

void converge(char *targ,char *src) {
    int i,j;
    printf("%s\n",targ);
    for ( i = 0,j = strlen(src); i <= j; i++,j--)
    {
        targ[i] = src[i];
        targ[j] = src[j];

        printf("%s \n",targ);
        /* code */
    }
    
}