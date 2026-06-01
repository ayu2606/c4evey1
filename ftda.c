// Fundament tpyes declaration and assignment
// To find avg of 3 numbers

#include <stdio.h>

int main(void){
    int a = 5, b = 7, c = 6; // Declare and initialize
    double average = 0.0; // Good practice
    printf("a = %d, b = %d, c = %d",a,b,c);
    average = (a + b + c) / 3.0; // Conversion if 3
    printf("Average = %lf\n", average); 
    printf("On my System\n"); // Printing sizes of diff data types on my system
    printf("Size of int %lu \nSize Of long int %lu \nSize of Char is %lu \nSize of Float is %lu \nSize of Double %lu \nSize of long Double %lu", sizeof(int),sizeof(long int), sizeof(char), sizeof(float), sizeof(double), sizeof(long double));
    return 0;
}

