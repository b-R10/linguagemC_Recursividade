/*
Dada a seguinte função:
Informar qual o valor retornado por F3 para as seguintes chamadas:
a) F3(10, 4) =
b) F3(4, 3) =
c) F3(4, 7) =
d) F3(0, 0) =
*/

#include <stdio.h>

// caso 10, 4
int F3 (int x, int y){
    if (x > y)
        return (-1);
        // -1
    else
        if (x == y)
            return (1);
        else
            return (x * F3(x + 1, y));
}

// caso 4, 3
int F4 (int x, int y){
    if (x > y)
        return (-1);
        // -1
    else
        if (x == y)
            return (1);
        else
            return (x * F4(x + 1, y));
}

// caso 4, 7
int F5 (int x, int y){
    if (x > y)
        return (-1);
    else
        if (x == y)
            return (1);
                // 1
        else
            return (x * F5(x + 1, y));
            // 4 * F5(5, 7)
                // 5 * F5(6, 7)
                    // 6 * F5(7, 7)
                    // 6 * 1 = 6
                // 5 * 6 = 30
            // 4 * 30 = 120
}

// caso 0, 0
int F6 (int x, int y){
    if (x > y)
        return (-1);
    else
        if (x == y)
            return (1);
            // 1
        else
            return (x * F6(x + 1, y));
}

int main(){
    printf("Caso a: %d\n", F3(10, 4));
        // imprime -1
    printf("Caso b: %d\n", F4(4, 3));
        // imprime -1 
    printf("Caso c: %d\n", F5(4, 7));
        // imprime 120 
    printf("Caso d: %d\n", F6(0, 0));
        // imprime 1 
}