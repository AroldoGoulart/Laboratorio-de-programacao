
/*
Faça um programa que lê um número n e imprima os 
valores entre 2 e n, que são divisores de n.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int i = 2;  

    printf("\nDigite o numero\n");

    scanf("%d", &n);

    for(i=2; i < n; i++) {
        if((n % i) == 0) {
            printf("O numero %d é divisor de %d \n", i, n);
        }
    }
 
    return 0;
}

