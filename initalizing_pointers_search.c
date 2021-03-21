/* A routine that access the array know that
 it has reached the end when it encounters the null value */
 
 /* Given the list of names,search() determines 
 whether a specified name is in that list */

 /* The search() function passed two parameters.
 The first (p),is an array of char* pointers 
 that points to the string contaning names.
 The second (name),is a pointer to the string 
 that points to the name being sought.
The search() function searches through the list of pointers,
seeking a string that one pointed by name. 
The for loop inside the search() runs until 
either a match is found or null pointer is encountered.
Assuming that the end of array is marked with the null,
condition controlling the array is false when the end of array is reached.
That is,p[t] is flase when p[t] is null.  */

#include <stdio.h>
#include <string.h>

int search (char *p[],char *name);

char *names[]={"Moon","Jon","Sita",NULL}; /*null pointer constant ends the list*/

int main()  {
    if (search(names,"Sita") != -1)
        printf("Sita is in the list \n");
    if(search(names,"Ram") == -1)
        printf("Ram is not in the list \n");
    return 0;
}

/* Look up a name */
int search(char *p[],char *name)    {
    register int t;
    for(t=0;p[t];t++)   
        if(!strcmp(p[t],name))
            return t;
    return -1; /* name not found */
}