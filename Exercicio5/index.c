#include <stdio.h>
#include <stdlib.h>

int main() {
    /*5- Dado de entrada dois valores numéricos fazer
     a subtração e apresentar ao usuário.
    */
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("A subtração é: %d\n", valor1 - valor2);
    return 0;
}