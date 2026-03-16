#include <stdio.h>
#include <stdlib.h>

int main() {
    /*9- Dados dois números diferentes dividir o 
    maior pelo menor valor..
    */
    int numero1, numero2;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    if (numero1 > numero2) {
        printf("O resultado da divisão é: %d\n", numero1 / numero2);
    } else {
        printf("O resultado da divisão é: %d\n", numero2 / numero1);
    }
    return 0;
}