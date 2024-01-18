/*
Realizar a soma dos 5 primeiros números naturais
solução iterativa
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int c){
    // c = a
    for(int i=0; i<5; i++)
        c += i+1;
    // retorna a soma realizada pelo laço for
    return c;
}

int main(){
    int a = 0;
    printf("Soma = %d", soma(a));
        // a função printf() chama a função soma() com o parâmetro a
    return 0;
}