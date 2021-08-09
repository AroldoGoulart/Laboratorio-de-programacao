/*
Escrever um algoritmo que lê n valores 
para uma variável, um de cada vez, e conte
quantos destes valores são negativos, 
escrevendo esta informação.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int nValores, nNegativos, i, aux;
    i = 0;
    nNegativos = 0;

    printf("\nDigite o numeros valores a serem contados\n");
    scanf("%d", &nValores);

    if(nValores >= 1) {
        for(i; i < nValores; i++) {
        printf("\nNumero a ser contado (%d):\n", i+1);
        scanf("%d", &aux);
        if(aux < 0 ) {
            nNegativos++;
        }
        }
        printf("\nNumero de negativos: %d\n", nNegativos);
    }
    else {
        printf("\nNada a ser contado");
    }
    
    return 0;
}
