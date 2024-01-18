/*
Qual o resultado impresso pelo programa seguinte:
*/

#include <stdio.h>

int g(int n, int a, int b);
int f(int n);

int g(int n, int a, int b){
    if(n == 0)
        return a;
        // 0, 21, 34
    else
        return g(n-1, b, a+b);
            // 7, 1, 1
            // 6, 1, 2
            // 5, 2, 3
            // 4, 3, 5
            // 3, 5, 8
            // 2, 8, 13
            // 1, 13, 21
            // 0, 21, 34
}

int f(int n){
    return g(n, 0, 1);
        // g(8, 0, 1)
}

int main(void){
    printf("%d", f(8));
    // imprime 8
}