/*
About Chars in C
Converting chars into ASCII
Finding three consecutie chars
Three bell rings chars - (Yea they make sound fr)
*/

#include <stdio.h>

int main(void){
    char c = 'a';
    printf("C in ASCII is %d \n", c);
    printf("C in Character is %c \n",c);
    printf("Three Consecutie chars are: %c%c%c \n",c, c+1, c+2);
    printf("Three bell ring chars are: %c%c%c \n",'\a','\a','\a'); //Nothing gets print here as output will be the sound
    return 0;
}