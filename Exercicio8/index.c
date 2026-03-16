#include <stdio.h>
#include <stdlib.h>

int main() {
    /*8- Dado um número verificar se ele é positivo ou negativo.
    */
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero > 0) {
        printf("O número %d é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    } else {
        printf("O número %d é zero.\n", numero);
    }
    return 0;
}