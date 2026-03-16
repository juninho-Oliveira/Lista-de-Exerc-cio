#include <stdio.h>
#include <stdlib.h>

int main() {
    /*16- Escreva um programa que 
    dado um número, ele diz se é um número primo ou não.
    */
    int num, i, count = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }
    return 0;
}