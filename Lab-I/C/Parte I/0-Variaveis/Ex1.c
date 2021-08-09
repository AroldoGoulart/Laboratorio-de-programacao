#include <stdio.h>
int main() {
    int a, b, aux;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);  

    printf("Digite o valor de B:\n");
    scanf("%d", &b);  

    aux = b;
    b = a;
    a = aux;

    printf("A = %d\n", a);
    printf("B = %d\n", b);
    return 0;
}
