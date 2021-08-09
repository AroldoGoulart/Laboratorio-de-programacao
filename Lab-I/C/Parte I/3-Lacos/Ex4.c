
/*
Faça um programa que lê dois números inteiros positivos a e b. 
Utilizando laços, o seu programa deve calcular e imprimir o valor ab.
*/

#include <stdio.h>
#include <string.h>

int main() {
    float a, b, c;
    int i;  
    c = 1.0f;

    printf("\nDigite a base\n");
    scanf("%f", &a);

    printf("\nDigite o expoente\n");
    scanf("%f", &b);

    for(i=0; i < b; i++) {
        c*= a;
    }
    printf("Valor final: %f\n", c);
    return 0;
}

