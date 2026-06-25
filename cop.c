/*
Conditional operators
if else

*/

#include <stdio.h>
#include <string.h> // for strcmp to compare strings
#include <iso646.h> // header file for "or" as replacement for "||"

int main(void){
    char name[10];
    printf("Enter your name: ");
    scanf("%9s",name);
    if (strcmp(name, "Ayush") == 0 or strcmp(name, "ayush") == 0){
        printf("Hello my master!");
    } else if (strcmp(name, "Ayush") != 0){
        printf("Hello %s", name);
    }
    return 0;
}