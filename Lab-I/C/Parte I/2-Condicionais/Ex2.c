/*
Escreva um programa lê três números e imprime o maior deles.
*/

#include <stdio.h>
int main() {
    float a, b, c, aux1, aux2;
    printf("Digite o valor 1:\n");
    scanf("%f", &a);  

    printf("Digite o valor 2:\n");
    scanf("%f", &b);  

    printf("Digite o valor 3:\n");
    scanf("%f", &c);  


    if(a > b) {
        aux1 =a;
        a = b;
        b = aux1;
    }
    if(b > c) {
        aux1 = b;
        b = c;
        c = aux1;
    }
    if(a > b) {
        aux1 = a;
        a = b;
        b = aux1;
    }

    printf("Ordem crescente: \n");
    printf("%f\n%f\n%f\n", a, b, c);
    return 0;
}