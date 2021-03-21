void display_array(int *q[])    {
    int t;
    for(t=0;t<10;t++)   {
        printf("%d",*q[t]);
    }
}

/*Remember, q is not a pointer to an integers,
but pointer to an array of pointer to integer.
Therefore,we have to declare q as
an array of integer pointers. */