/*
Faça uma função recursiva em um programa que calcula e retorna o valor de S, onde S = 0 + 1 + 2 + N.
N é um número inteiro e positivo.
*/

#include <stdio.h>

int calcula(int N, int b){
    if(b < 2){
            return (b + calcula(N, b + 1));
                // 0 + calcula(N, 1)
                    // 1 + calcula(N, 2)
                    // 1 + (N + 2)
                // 0 + (N + 3)
    }else{
            return (N + b);
    }
}

int main(){
    printf("Insira um valor inteiro para N:\n\t");
    int x;
    scanf("%d", &x);
    printf("S = %d", calcula(x, 0));
    return 0;
}