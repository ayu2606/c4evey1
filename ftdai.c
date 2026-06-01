// Doing the same thing as in ftda.c but with inputing 3 values

#include <stdio.h>

int main(void){
    int a,b,c; // declare and init
    double avg;
    printf("Please enter a: \n");
    scanf("%d", &a);
    printf("Please enter b: \n");
    scanf("%d", &b);
    printf("Please enter c: \n");
    scanf("%d", &c);
    avg = (a + b + c) / 3.0; // Conversion
    printf("\nAvg is: %lf",avg);
}