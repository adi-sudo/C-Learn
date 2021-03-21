/*The program uses a two-dimensional array to store numeric grade for each student in a 
teacher classes */
/* A simple student grades database */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CLASSES 2
#define GRADES 2

int grade[CLASSES][GRADES];

void enter_grades(void);
int get_grade(int num);
void disp_grades(int g[][GRADES]);

int main()  {
    char ch,str[80];

    for(;;) {
        do
        {
            printf("(E)nter grades\n");
            printf("(R)eport grades\n");
            printf("(Q)uit\n");
            gets(str);
            ch=toupper(*str);

            // printf("\n ch : %c str :  %c \n",ch,*str);
            /* code */
        } while (ch != 'E' && ch != 'R' && ch != 'Q');

    switch (ch)
    {
    case /* constant-expression */'E':
        /* code */
        enter_grades();
        break;
    case 'R':
        disp_grades(grade);
        break;
    case 'Q':
    exit(0);
    }
        }

    return 0;
}

/* Enter the student grades */
void enter_grades(void) {
    int i,t;
    for(t=0;t<CLASSES;t++)  {
        printf("Class # %d : \n",t+1);
        for(i=0;i<GRADES;i++)
            grade[t][i]=get_grade(i);
    }
}

/* Read a grade */
int get_grade(int num)  {
    char s[80];
    printf ("Enter grade for student # %d : \n",num+1);
    gets(s);

    return (atoi(s));
}

/* Display grade */
void disp_grades(int g[][GRADES])   {
    int i,t;
    for (t=0;t<CLASSES;t++) {
        printf("Class # %d : \n",t+1);
        for (i=0;i<GRADES;i++)
        printf("Student # %d is %d \n",i+1,g[t][i]);
    }
}