#include <stdio.h>
#include <stdlib.h>

int main() {
    /*11 - Dado a formula media = n1+n2+n3/3 escrever o 
    valor do resultado ao usuário quando ele digitar o 
    valor de n1, n2 e n3.
    */
    int n1, n2, n3;
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
    printf("Digite o valor de n3: ");
    scanf("%d", &n3);
    float media = (n1 + n2 + n3) / 3.0;
    printf("O valor da média é: %.2f\n", media);
    return 0;
}