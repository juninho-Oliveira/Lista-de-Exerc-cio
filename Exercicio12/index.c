#include <stdio.h>
#include <stdlib.h>

int main() {
    /*12- Dado a formula A/5 = B/(A+2) 
    calcular o valor de B dado uma entrada de A
    */
    int A, B;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    B = (A * (A + 2)) / 5;
    printf("O valor de B é: %d\n", B);
    return 0;
}