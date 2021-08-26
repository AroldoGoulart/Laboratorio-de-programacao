#include <stdio.h>

/* 
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

Exemplos de Entrada	Exemplos de Saída
10.0 20.1 5.1

R1 = -0.29788
R2 = -1.71212

0.0 20.0 5.0

Impossivel calcular

10.3 203.0 5.0

R1 = -0.02466
R2 = -19.68408

10.0 3.0 5.0

Impossivel calcular
*/

// function to calc sqrt
double sqrt(double x) {
    double y,z;
    int i;
    y = x/2;
    for (i = 0; i < 20; i++) {
        z = (y + x/y)/2;
        y = z;
    }
    return z;
}

int main() {
    double a = 0;
    double b = 0;
    double c = 0;

    scanf("%lf\n%lf\n%lf", &a, &b, &c);  

    double delta = b * b - 4 * a * c;
    if (a <= 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } 
    else if(delta == 0){
        printf("R1 = %.5lf\n", (double)(-b / (2 * a)));
        printf("R2 = %.5lf\n", (double)(-b / (2 * a)));
    }
    else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }   
    return 0;   
}