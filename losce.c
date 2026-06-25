/*
Logical operators and short circuit evaluation

simple if and else program

-- take input 
-- greet "hellow sir if name is ayush"
-- else greet "hello"

*/

#include <stdio.h>
#include <string.h>

int main(void){
    char name[50];
    printf("Enter your name: ");
    scanf("%49s",name);
    if (strcmp(name, "Ayush") == 0){
        printf("Hello Sir %s",name);
    } else {
        printf("Namaster!");
    }
    return 0;
}