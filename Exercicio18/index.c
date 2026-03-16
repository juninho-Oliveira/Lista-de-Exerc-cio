#include <stdio.h>
#include <stdlib.h>

int main() {
    /*18- Escreva um programa que imprima o seguinte vetor:
    1  1  2  3  5  8  13  21  34  55  86  144  
    233  300  533
    */
    int vetor[15] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 86, 144, 233, 300, 533};

    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}