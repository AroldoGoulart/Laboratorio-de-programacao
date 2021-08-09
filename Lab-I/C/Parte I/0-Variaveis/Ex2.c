/*
 Escreva um programa que troca o 
 valor de duas variáveis inteiras 
 usando apenas as duas variáveis 
 (use operações matemáticas para 
 resolver o problema)
*/

#include <stdio.h>
int main() {
    int a, b;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);  

    printf("Digite o valor de B:\n");
    scanf("%d", &b);  
    
    b = a + b;
    a = b - a; 
    b = b - a; 

    printf("A = %d\n", a);
    printf("B = %d\n", b);
    return 0;
}
