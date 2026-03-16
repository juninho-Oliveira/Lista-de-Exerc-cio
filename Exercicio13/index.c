#include <stdio.h>
#include <stdlib.h>

int main() {
    /*13- Escreva um programa que dados 15 
    números, imprima seus quadrados, obs: você 
    não precisa necessariamente imprimir no final.
    */
    int numeros[15];
    printf("Digite 15 números:\n");
    for (int i = 0; i < 15; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("Os quadrados dos números são:\n");
    for (int i = 0; i < 15; i++) {
        printf("Quadrado de %d: %d\n", numeros[i], numeros[i] * numeros[i]);
    }
    return 0;
}