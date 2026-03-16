#include <stdio.h>
#include <stdlib.h>

int main() {
    /*2- Dado a entrada via teclado do nome de usuário 
    (seu nome) escrever na tela “Bem-vindo nome de usuário” 
    */
    char nome[100];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Bem-vindo, %s!\n", nome);
    return 0;
}