/*These two version of putstr() -
one with array indexing and
one with pointers 
illustrates how we can use pointers in place of array indexing
The putstr() function write a string to standard output device 
one character at a time. */

/* Index s as an array */
void putchar(char *s)   {
    register int t;
    for(t=0;s[t];t++)
        putchar(s[t]);
}


/*Access s as pointer */
void putchar(char *s)   {
    while(*s)   {
        putchar(*s++);
    }
}