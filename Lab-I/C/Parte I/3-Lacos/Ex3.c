
/*
Escrever um algoritmo que lê um valor N inteiro e positivo e que calcule e escreva o valor
de E.
O Cálculo de $E = 1 + 1/1! + 1/2! + 1/3! ... + 1/N! 
*/

#include <stdio.h>
#include <string.h>

int main() {
    int nValoresP, i, j;
    float fat;
    float E = 1.00000;

    printf("\nDigite o numeros valores a serem contados\n");
    scanf("%d", &nValoresP);

    for(i=0; i < nValoresP; i++) {
        fat = 1;
        // calcula fatorial
        for(j=1;j<=i;j++){
            fat = fat * i;
        }
        E+= 1 / (fat);
    }

    printf("Valor final: %2.10f\n", E);
    return 0;
}

