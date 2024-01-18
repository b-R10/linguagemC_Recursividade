/*
Realizar a soma dos 5 primeiros números naturais
solução recursiva
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int num){
    // num = i
    if(num <= 5){
        // se num < 5, o laço é executado
        printf("-%d, ", num);
            // apenas para registrar o passo a passo da função
        return (num + soma(num+1));
            // 1 + soma(2)
                // 2 + soma(3)
                    // 3 + soma(4)
                        // 4 + soma(5)
                            // 5 + soma(6)
                            // 5 + 0 == 5
                        // 4 + 5 == 9
                    // 3 + 9 == 12
                // 2 + 12 == 14
            // 1 + 14 == 15
    } else
        return 0;
}

int main(){
    int i = 1;
    printf("%d ", soma(i));
        // a função printf() chama a função soma() com o parâmetro i
    return 0;
}