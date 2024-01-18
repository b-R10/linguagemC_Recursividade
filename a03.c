/*
Qual será o resultado do seguinte programa:
*/

#include <stdio.h>

int rec1(int a);

int main(void){
    printf(" %d ", rec1(4)); // imprime 
    return 0;
}

int rec1(int a){
    if (a == 0)
        return 1;
    else
        return (a * rec1(a-1));
            // 4 * (rec1(3))
                // 3 * (rec1(2))
                    // 2 * (rec1(1))
                        // 1 * (rec1(0))
                        // 1 * 1 = 1
                    // 2 * 1 = 2
                // 3 * 2 = 6
            // 4 * 6 = 24
}