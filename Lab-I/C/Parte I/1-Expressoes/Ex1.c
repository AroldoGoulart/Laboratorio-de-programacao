/*
    Cléber, pai de Joãozinho, decidiu dar
    uma mesada ao seu filho. No primeiro 
    mês ele dará X Reais e com o passar 
    de cada mês ele dará um acréscimo de 
    Y Reais no valor base da mesada. 
    Por exemplo, Joãozinho receberá R\$ 
    X no 1º mês, R\$ X+Y no 2º mês, R\$ X+2Y no 3º mês, 
    e assim por diante.
*/


#include <stdio.h>
int main() {
    float base, crescimento, valorFinal, valorTotal, media;
    int nMeses;

    printf("Digite a base da mesada:\n");
    scanf("%f", &base);  

    printf("Digite o crescimento mensal:\n");
    scanf("%f", &crescimento);  
    
    printf("Digite o numero de meses:\n");
    scanf("%d", &nMeses);  

    // Usando formula PA e Soma de PA
    valorFinal = base + ((nMeses - 1)*crescimento);
    media = valorFinal / nMeses;
    valorTotal = (nMeses * (base + valorFinal)) / 2;

    // Quanto Joãozinho vai ganhar no último mês?
    printf("Joãozinho vai receber: %.2f\n", valorFinal);

    // Quanto Joãozinho ganhará em M meses (valor acumulado)?
    printf("Joãozinho ganhará ao total: %.2f\n", valorTotal);

    //Qual é a média do valor da mesada recebida por Joãozinho (com duas casas decimais?
    printf("A media do valor mensal será: %.2f\n", media);
    
    return 0;
}

