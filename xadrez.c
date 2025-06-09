#include <stdio.h>

int main() {
    int contador; 

    printf("Torre move 5 casas pra direita:\n");
    for (contador = 1; contador <= 5; contador++) {
        printf("Direita\n");
    }

    
    printf("\nBispo move 5 casas na diagonal cima-direita:\n");
    contador = 1;
    while (contador <= 5) {
        printf("Cima, Direita\n");
        contador++;
    }

    printf("\nRainha move 8 casas pra esquerda:\n");
    contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= 8);


    printf("\nDigite um numero pra sair: ");
    int espera;
    scanf("%d", &espera);

    return 0;
}