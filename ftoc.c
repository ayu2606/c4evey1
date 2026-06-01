/*
A program to convert Farenheit To Celsius


C = (F - 32)/1.8

*/

#include <stdio.h>

int main(void){
    int c, f;
    printf("Please inter Farenheit Value as Integer: ");
    scanf("%d",&f);
    c = (f - 32)/1.8;
    printf("\n%d Farenheit is %d Celsius\n", f,c);
    return 0;
}