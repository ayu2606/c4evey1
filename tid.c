/* 
Types of int datatype:
short: 2bytes: +-32k -- %hd 
int: 4bytes: +-2B
Long: 8Bytes: +-9 quintillion 
unsigned: only store positive value, as they use space of negative value, example 4 bytes int they can store about +4 billion
*/

#include <stdio.h>

int main(void){
    short s_a = 5;
    int n_a = 67;
    unsigned u_a = 67u;
    long l_a = 67l;
    printf("Short int %hd divided by int 2 is %d\n",s_a, s_a/2);
    printf("Short %hd divided by float 2 is: %lf\n",s_a, s_a/2.0);
    printf("Normal int %d in char is %c\n",n_a, n_a);
    printf("Sizes of short, int, unsigned, long on my machine is: ");
    printf("%lu, %lu , %lu , %lu\n",sizeof(s_a),sizeof(n_a),sizeof(u_a), sizeof(l_a));
    return 0;
}