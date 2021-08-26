
/*
Faça um programa que lê dois números inteiros positivos a e b. 
Utilizando laços, o seu programa deve calcular e imprimir o valor ab.
*/

#include <stdio.h>
#include <string.h>

int main() {
    double a, b, c;
    int i;  
    c = 1.0f;

    printf("\nDigite a base\n");
    scanf("%f", &a);

    printf("\nDigite o expoente\n");
    scanf("%f", &b);

    if(b <= -1) {
        for(i=0; i < b*-1; i++) {
            c*= a;
        }
        c = 1/c;
    }
    else {
        for(i=0; i < b; i++) {
            c*= a;
        }
    }
 
    printf("Valor final: %d\n", c);
    return 0;
}

