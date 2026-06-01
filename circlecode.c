/*
A program to find area of a circle by inputing radius from the user.
*/

#include <stdio.h>

#define PI 3.14

int main(){
    double area = 0.0, radius = 0.0;
    printf("Enter Radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Radius is %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;
}