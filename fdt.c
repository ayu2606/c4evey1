/*
Float datatypes in C
float: 10^-38 to 10^38 i.e 6 significant figures
double: 10^-308 to 10^308 i.e 15 significant figures
long double: same as double but 31 significant figures
float <= doube <= long double
*/

#include <stdio.h>

int main(void){
    printf("Size of\n float %lf\n,double %lf\n,long double %lf",sizeof(float), sizeof(double), sizeof(long double));
    return 0;
}