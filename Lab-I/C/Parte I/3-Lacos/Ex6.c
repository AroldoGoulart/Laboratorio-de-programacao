
/*
    Chico tem 1,50 metro e cresce 2 centímetros 
    por ano, enquanto Zé tem 1,10 metro e cresce
    3 centímetros por ano. Construa um algoritmo que
    calcule e imprima quantos anos serão necessários 
    para que Zé seja maior que Chico utilizando laço.
*/

#include <stdio.h>
#include <string.h>

int main() {
    float mChico = 1.50;
    float mZe = 1.10;  

    float cChico = 0.02;
    float cZe = 0.03;  
    
    int anos = 0;
    int i;
    for(i=0; mChico > mZe; i++) {
        mChico+= cChico;
        mZe+= cZe;
        anos++;
    }
    printf("Em %d anos Zé sera maior que Chico\n", anos);

    return 0;
}

