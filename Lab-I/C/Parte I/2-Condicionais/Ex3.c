
/*
Escreva um programa (na linguagem C) que, dado duas datas, 
determine qual delas ocorreu cronologicamente antes em relação a outra. 
Cada data é composta de 3 números inteiros, um representando o ano, outro o mês e outro o 
dia.
*/

#include <stdio.h>
int main() {
    int d1, m1, y1, d2, m2, y2, maior;

    printf("Digite o dia da primeira data:\n");
    scanf("%d", &d1);  

    printf("Digite o mes da primeira data:\n");
    scanf("%d", &m1);

    printf("Digite o ano da primeira data:\n");
    scanf("%d", &y1);  

    printf("Digite o dia da segunda data:\n");
    scanf("%d", &d2);  

    printf("Digite o mes da segunda data:\n");
    scanf("%d", &m2);

    printf("Digite o ano da segunda data:\n");
    scanf("%d", &y2);  

    // aderi o maior mes inicialmente como 0 para nao precisar zerar o valor na logica abaixo, evitando repeticao
    maior = 0;
    if(y2 == y1) {
        if(m2 == m1) {
            if(d2 == d1) {
                // mesmo dia mes e ano
            }
            else if(d2 > d1) {
                maior = 1;
            }
        }
        else if(m2 > m1) {
            maior = 1;
        }
    }
    else if(y2 > y1) {
        maior = 1;
    }

    printf("\nEntre as datas: %d/%d/%d e %d/%d/%d\nOcorreu primeiro: ", d1, m1, y1, d2, m2, y2);

    if(maior == 0) {
        printf("%d/%d/%d\n", d2, m2, y2);
    }
    else {
        printf("%d/%d/%d\n", d1, m1, y1);
    }
    return 0;
}