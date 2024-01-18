/*
Dada a seguinte função:
int F2 (int x, int y){
    if (x < y)
        return (-3);
    else
        return (F2(x - y, y + 3) + y);
}
Informar qual o valor retornado por F2 para as seguintes chamadas:
a) F2(2, 7) =
b) F2(5, 3) =
c) F2(15, 3) =
*/

#include <stdio.h>

// caso a (2,7)
int F2 (int x, int y){
    if (x < y)
        return (-3);
            // -3
    else
        return (F2(x - y, y + 3) + y);
}

// caso b (5, 3)
int F3 (int x, int y){
    if (x < y)
        return (-3);
    else
        return (F3(x - y, y + 3) + y);
            // (F2(2, 6) + 3)
                // chama a outra condição do if e retorna -3
            // -3 + 3 = 0
}

// caso c (15, 3)
int F4 (int x, int y){
    if (x < y)
        return (-3);
    else
        return (F4(x - y, y + 3) + y);
            // (F2(12, 6) + 3)
                // (F2(6, 9) + 6)
                    // chama a outra condição do if e retorna -3        
                // -3 + 6 = 3
            // 3 + 3 = 6
}

int main(){
    printf("%d\n", F2(2, 7)); // imprime -3
    printf("%d\n", F3(5, 3)); // imprime 0
    printf("%d\n", F4(15, 3)); // imprime 6
    return 0;
}