/*
Dada a seguinte função:
Informar qual o valor retornado por func1 para as seguintes chamadas:
a) func1(4) = 
b) func2(10) =
c) func3(12) =
*/

#include <stdio.h>

// caso 4
int func1 (int x){
    // x = 4
    if (x < 5)
        return (3 * x);  
            // 4 * 3 = 12
    else
        return (2 * func1(x-5) + 7);
}

// caso 10
int func2 (int x){
    // x = 10
    if (x < 5)
        return (3 * x);
            // 3 * 0 = 0
    else
        return (2 * func2(x-5) + 7);
            // 2 * func2(5) + 7
                // 2 * func2(0) + 7
                    // chama a outra condição do if e retorna 0
                // 2 * 0 + 7 = 7
            // 2 * 7 + 7 = 21
}

// caso 12
int func3 (int x){
    if (x < 5)
        return (3 * x);
            // retorna 3 * 2 = 6
    else
        return (2 * func3(x-5) + 7);
            // 2 * func3(7) + 7
                // 2 * func3(2) + 7
                    // chama a outra condição do if
                // 2 * 6 + 7 = 19
            // 2 * 19 + 7 = 45
}

int main(){
    printf("%d, ", func1(4));
        // imprime 12
    printf("%d, ", func2(10));
        // imprime 21
    printf("%d ", func3(12));
        // imprime 45
    return 0;
}