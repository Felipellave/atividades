//Felipe Castillo
#include <stdio.h>

int multiplicarValores(int vetor[], int tamanho) {
    int produto = 1;
    for (int i = 0; i < tamanho; i++) {
        produto *= vetor[i];
    }
    return produto;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    int produto = multiplicarValores(vetor, tamanho);
    printf("Resultado da multiplicação: %d\n", produto);
    return 0;
}
