#include <stdio.h>
#include <stdlib.h>

int main() {
    /*3- Dado de entrada um numeral 
    escrever na tela “O número digitado foi: numeral” 
    */
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("O número digitado foi: %d\n", numero);
    return 0;
}