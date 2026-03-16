#include <stdio.h>
#include <stdlib.h>

int main() {
    /*15 - Escreva um programa que imprima na tela o 
    fatorial de um número recebido. 
    Ex: 5! = 5x4x3x2x1 => 120
    */
    int numero, fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);
    for (int i = numero; i > 0; i--) {
        fatorial *= i;
    }
    printf("%d! = %d\n", numero, fatorial);
    
    return 0;
}