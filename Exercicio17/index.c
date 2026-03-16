#include <stdio.h>
#include <stdlib.h>

int main() {
    /*17- Escreva um programa que imprime todos os 
    números primos positivos a partir do zero até um 
    número digitado..
    */
    int limite, i, j, isPrime;

    printf("Digite o limite: ");
    scanf("%d", &limite);

    for (i = 2; i <= limite; i++) {
        isPrime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d é um número primo.\n", i);
        }
    }

    return 0;
}