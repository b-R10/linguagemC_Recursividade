/*
O programa descrito a seguir é a resultadoolução do fatorial por meio de uma animação.
Execute-o e analise-o para compreender melhor o conceito de recursão em programação.
*/

#include <stdio.h>

// variável global
int Espaco = 0;         /* para imprimir com espaçamento */

void printEspacos(int n) {
    while(n-- > 0)
        printf(" ");
}

int fatorial(int n) {
    int resultado;
    printEspacos(Espaco);
    printf("Entra em fatorial(%d)\n",n);
    if (n <= 1){
        resultado = 1;
    } else {
        Espaco++;       /* para indentar mais */
        resultado = n * fatorial(n-1);
        Espaco--;       /* para repor */
    }
    printEspacos(Espaco);
    printf("Sai de fatorial(%d) = %d\n", n, resultado);
    return resultado;
}

int main(){
    int k;
    for(k=0; k<9; k++){
        printf("\n*********** Fatorial de %d **********************\n\n", k);
        fatorial(k);
        printf("\n*************************************************\n\n");
    }
    return 0;
}

/************ SAÍDA ************/
/*
*********** Fatorial de 0 **********************

Entra em fatorial(0)
Sai de fatorial(0) = 1

*************************************************


*********** Fatorial de 1 ********************** 

Entra em fatorial(1)
Sai de fatorial(1) = 1

*************************************************


*********** Fatorial de 2 ********************** 

Entra em fatorial(2)
 Entra em fatorial(1)
 Sai de fatorial(1) = 1
Sai de fatorial(2) = 2

*************************************************


*********** Fatorial de 3 **********************

Entra em fatorial(3)
 Entra em fatorial(2)
  Entra em fatorial(1)
  Sai de fatorial(1) = 1
 Sai de fatorial(2) = 2
Sai de fatorial(3) = 6

*************************************************


*********** Fatorial de 4 **********************

Entra em fatorial(4)
 Entra em fatorial(3)
  Entra em fatorial(2)
   Entra em fatorial(1)
   Sai de fatorial(1) = 1
  Sai de fatorial(2) = 2
 Sai de fatorial(3) = 6
Sai de fatorial(4) = 24

*************************************************


*********** Fatorial de 5 **********************

Entra em fatorial(5)
 Entra em fatorial(4)
  Entra em fatorial(3)
   Entra em fatorial(2)
    Entra em fatorial(1)
    Sai de fatorial(1) = 1
   Sai de fatorial(2) = 2
  Sai de fatorial(3) = 6
 Sai de fatorial(4) = 24
Sai de fatorial(5) = 120

*************************************************


*********** Fatorial de 6 **********************

Entra em fatorial(6)
 Entra em fatorial(5)
  Entra em fatorial(4)
   Entra em fatorial(3)
    Entra em fatorial(2)
     Entra em fatorial(1)
     Sai de fatorial(1) = 1
    Sai de fatorial(2) = 2
   Sai de fatorial(3) = 6
  Sai de fatorial(4) = 24
 Sai de fatorial(5) = 120
Sai de fatorial(6) = 720

*************************************************


*********** Fatorial de 7 **********************

Entra em fatorial(7)
 Entra em fatorial(6)
  Entra em fatorial(5)
   Entra em fatorial(4)
    Entra em fatorial(3)
     Entra em fatorial(2)
      Entra em fatorial(1)
      Sai de fatorial(1) = 1
     Sai de fatorial(2) = 2
    Sai de fatorial(3) = 6
   Sai de fatorial(4) = 24
  Sai de fatorial(5) = 120
 Sai de fatorial(6) = 720
Sai de fatorial(7) = 5040

*************************************************


*********** Fatorial de 8 **********************

Entra em fatorial(8)
 Entra em fatorial(7)
  Entra em fatorial(6)
   Entra em fatorial(5)
    Entra em fatorial(4)
     Entra em fatorial(3)
      Entra em fatorial(2)
       Entra em fatorial(1)
       Sai de fatorial(1) = 1
      Sai de fatorial(2) = 2
     Sai de fatorial(3) = 6
    Sai de fatorial(4) = 24
   Sai de fatorial(5) = 120
  Sai de fatorial(6) = 720
 Sai de fatorial(7) = 5040
Sai de fatorial(8) = 40320

*************************************************
*/