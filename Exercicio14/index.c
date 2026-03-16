#include <stdio.h>
#include <stdlib.h>

int main() {
    /*14- Escreva um programa que dado o primeiro número e 
    a razão de uma sequência, imprima seus dez primeiros 
    termos: você não precisa necessariamente imprimir 
    no final.
    */

    int primeiro, razao, termo;

    printf("Digite o primeiro numero da sequencia: ");
    scanf("%d", &primeiro);

    printf("Digite a razao da sequencia: ");
    scanf("%d", &razao);

    termo = primeiro;

    for(int i = 0; i < 10; i++) {
        printf("%d\n", termo);
        termo = termo + razao;
    }
    
    return 0;
}