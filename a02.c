/*
Quais serão os conteúdos da variável valor da função abaixo, ou seja, na ordem de chamada da função rec?
Quais serão os valores impressos?
*/

#include <stdio.h>

void rec(int a);

int main(void) {
    rec(40);
    return 0;
}

void rec(int a){
    // a = 40
    int valor;
    valor = a/2;
        // valor 20
            // valor 10
                // valor 5 
                    // valor 2
                        // valor 1
                            // valor 0 
    printf(" %d ", valor);

    if (valor > 0)
        rec(valor);

    printf(" %d ", valor); 
    // valor 0
        // valor 1
            // valor 2
                // valor 5
                    // valor 10
                        // valor 20
}