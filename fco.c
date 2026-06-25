/*
For statement practice 

for (initialization; condition; update){} 
Initialization → Runs once at the beginning.
Condition → Checked before every iteration.
Update → Runs after each iteration.

*/
#include <stdio.h>

// int main(void){
//     for (int i = 0; i <= 20; i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// Print even numbers

int main(){
    for (int i = 2; i <= 20; i += 2){
        printf("%d\n",i);
    }
    return 0;
}