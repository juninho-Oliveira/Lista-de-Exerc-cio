#include <stdio.h>
#include <stdlib.h>

int main() {
    /*7- Dado um número verificar se ele é maior que 10
    */
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero > 10) {
        printf("O número %d é maior que 10.\n", numero);
    } else {
        printf("O número %d não é maior que 10.\n", numero);
    }
    return 0;

}