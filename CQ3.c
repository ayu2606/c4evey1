/*
This program is a solution to 
The program has a mistake. The following code is supposed to produce the volume of a sphere as a double but is using ints. Redo the program, fix this issue, and submit the file.

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 int radius;
 printf(“Enter radius:”);
 scanf(“%d”, &radius);
printf(“volume is : %d \n\n“, 4 *radius*radius*radius/3 );
return 0;
}

*/


#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
    double radius;
    printf("Enter radius:");
    scanf("%lf", &radius);
    printf("volume is : %lf \n\n", 4 *radius*radius*radius/3.0 );
    return 0;
}