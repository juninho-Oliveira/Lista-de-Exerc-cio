#include <stdio.h>
#include <stdlib.h>

int main() {
    /*4- Dado de entrada um valor lógico escrever 
    na tela “O valor oposto é: valor lógico” 
    */
    int valor_logico;
    printf("Digite um valor lógico (0 ou 1): ");
    scanf("%d", &valor_logico);
    printf("O valor oposto é: %d\n", !valor_logico);
    return 0;
}