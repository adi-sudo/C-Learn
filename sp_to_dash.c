#include <stdio.h>

//void sp_to_dash(const char *str );
void sp_to_dash(char *str );
int main() {
    sp_to_dash("This is a test");
    return 0;
}
//void sp_to_dash(const char *str)    {
void sp_to_dash(char *str)    {

    while (*str)
    {
        if(*str == ' ')  
        *str ='-'; 
        printf("%c",*str);
        //printf("%c",'-'); 
            //  else               printf("%c",*str);
            str++;
    }
    
}