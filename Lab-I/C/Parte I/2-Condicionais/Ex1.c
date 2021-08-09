/*
Escreva um programa que lê um número inteiro do teclado 
e imprime "SIM" se o número for par e maior do que 10, ou for 
ímpar e menor do que 50. Caso contrário o programa deve imprimir "NAO".
*/

#include <stdio.h>
int main() {
    int a;
    printf("Digite o valor inteiro:\n");
    scanf("%d", &a);  

    if((a & 2 == 0 && a > 10) || (a & 2 != 0 && a < 50))  {
        printf("SIM");
    }
    else {
        printf("NAO");
    }

    return 0;
}
