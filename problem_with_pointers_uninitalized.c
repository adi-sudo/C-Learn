/* This program is wrong */
int main()  {
    int x,*p;
    x = 10;

    *p = x; /* error,p is not initalised  */

    return 0;
}