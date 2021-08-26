#include <stdio.h>

/* 
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.

Exemplo de Entrada	Exemplo de Saída
576

576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00

11257

11257
112 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
0 nota(s) de R$ 1,00

503

503
5 nota(s) de R$ 100,00
0 nota(s) de R$ 50,00
0 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
0 nota(s) de R$ 5,00
1 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00
*/


int main() {
    int n= 10;  
    int nOr= 10;  
    int c100 = 0;
    int c50 = 0;
    int c20 = 0;
    int c10 = 0;
    int c5 = 0;
    int c2 = 0;
    int c1 = 0;
    scanf("%d", &n);  
    nOr =n;
    while(n > 0) {
        if(n >= 100) {
            c100++;
            n-= 100;
        }
        else if(n >= 50) {
            c50++;
            n-= 50;
        }
        else if(n >= 20) {
            c20++;
            n-= 20;
        }
        else if(n >= 10) {
            c10++;
            n-= 10;
        }
        else if(n >= 5) {
            c5++;
            n-= 5;
        }
        else if(n >= 2) {
            c2++;
            n-= 2;
        }
        else if(n >= 1) {
            c1++;
            n-= 1;
        }
    }
    printf("%d\n", nOr)
    printf("%d nota(s) de R$ 100,00\n", c100);
    printf("%d nota(s) de R$ 50,00\n", c50);
    printf("%d nota(s) de R$ 20,00\n", c20);
    printf("%d nota(s) de R$ 10,00\n", c10);
    printf("%d nota(s) de R$ 5,00\n", c5);
    printf("%d nota(s) de R$ 2,00\n", c2);
    printf("%d nota(s) de R$ 1,00\n", c1);
    return 0;
}