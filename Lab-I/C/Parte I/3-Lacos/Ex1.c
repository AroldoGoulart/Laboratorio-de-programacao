/*
Faça um programa que imprima um menu de 4 pratos 
na tela e uma quinta opção para sair do programa.
O programa deve imprimir a descrição do prato 
solicitado e o preço. O programa deve terminar 
quando for escolhida a quinta opção.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int selected = 3;

    char p1[] = "Sushi";
    char p2[] = "Sashimi";
    char p3[] = "Tempura";
    char p4[] = "Unagi";

    printf("Menu\n");
    printf("1) %s\n", p1 );
    printf("2) %s\n", p2 );
    printf("3) %s\n", p3 );
    printf("4) %s\n", p4 );
    printf("5) Parar listagem\n");
    
    char desc1[] =  "O prato é feito a partir de alga marinha desidratata (nori), arroz temperado levemente com vinagre, que é recheado com ingredientes variados, como pedacinhos de peixe cru, omelete, cenoura, entre outros.";
    char desc2[] = "Feito com peixes de água salgada, como o salmão e atum.";
    char desc3[] = "Consiste em legumes, peixes desidratadas ou frutos do mar empanados e fritos no óleo";
    char desc4[] = "O prato consiste em enguia de água doce grelhada com molho de barbecue doce.";

    char price1[] = "R$: 10,00";
    char price2[] = "R$: 11,00";
    char price3[] = "R$: 12,25";
    char price4[] = "R$: 8,25"; 

    while(selected != 5) {
        printf("\nDigite o ID do prato selecionado:\n");
        scanf("%d", &selected);
        if(selected !=  5) {
            switch(selected) {
                case 1: {
                    printf("\nDescricao: %s\n", desc1);
                    printf("\nPreco: %s\n", price1);
                    break;
                }
                case 2: {
                    printf("\nDescricao: %s\n", desc2);
                    printf("\nPreco: %s\n", price2);
                    break;
                }
                case 3: {
                    printf("\nDescricao: %s\n", desc3);
                    printf("\nPreco: %s\n", price3);
                    break;
                }
                case 4: {
                    printf("\nDescricao: %s\n", desc4);
                    printf("\nPreco: %s\n", price4);
                    break;
                }
                default: {
                    printf("\nFavor selecionar um prato valido (entre 1 e 4)\n");
                }
            }
        }
    }

    
    return 0;
}
