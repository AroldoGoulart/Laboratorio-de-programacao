#include <stdio.h>

/* 
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

Exemplo de Entrada	Exemplo de Saída
576.73

NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01

4.00

NOTAS:
0 nota(s) de R$ 100.00
0 nota(s) de R$ 50.00
0 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
2 nota(s) de R$ 2.00
MOEDAS:
0 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
0 moeda(s) de R$ 0.01

91.01

NOTAS:
0 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
2 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
1 moeda(s) de R$ 0.01
*/


int main() {
    double n;
    scanf("%lf", &n);
    
    //NOTAS:
    int notas100 = (int) (n / 100);
    n = n - (notas100 * 100);
    int notas50 = (int) (n / 50);
    n = n - (notas50 * 50);
    int notas20 = (int) (n / 20);
    n = n - (notas20 * 20);
    int notas10 = (int) (n / 10);
    n = n - (notas10 * 10);
    int notas5 = (int) (n / 5);
    n = n - (notas5 * 5);
    int notas2 = (int) (n / 2);
    n = n - (notas2 * 2);
    
    //MOEDAS:
    int moedas1 = (int) (n / 1);
    n = n - (moedas1 * 1);

    int moedas050 = (int) (n / 0.5);
    n = n - (moedas050 * 0.5);

    int moedas025 = (int) (n / 0.25);
    n = n - (moedas025 * 0.25);
    
    int moedas010 = (int) (n / 0.1);
    n = n - (moedas010 * 0.1);
    
    int moedas05 = (int) (n / 0.05);
    n = n - (moedas05 * 0.05);

    printf("antes %lf", n);

    int moedas01 = (int) (n / 0.01);
    n = n - (moedas01 * 0.01);
    printf("%d moedas, resto %lf mod %lf", moedas01, n, (moedas01 * 0.01));

    if(n >= 0.01) {
        printf("NOTAS:\n");
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas1);
    printf("%d moeda(s) de R$ 0.50\n", moedas050);
    printf("%d moeda(s) de R$ 0.25\n", moedas025);
    printf("%d moeda(s) de R$ 0.10\n", moedas010);
    printf("%d moeda(s) de R$ 0.05\n", moedas05);
    printf("%d moeda(s) de R$ 0.01\n", moedas01);

    return 0;   
}