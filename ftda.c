// Fundament tpyes declaration and assignment
// To find avg of 3 numbers

#include <stdio.h>

int main(void){
    int a = 5, b = 7, c = 6; // Declare and initialize
    double average = 0.0; // Good practice
    printf("a = %d, b = %d, c = %d",a,b,c);
    average = (a + b + c) / 3.0; // Conversion if 3
    printf("Average = %lf\n", average);
    return 0;
}

