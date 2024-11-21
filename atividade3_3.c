//Felipe Castillo
#include <stdio.h>

int somarValores(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int tamanho, soma;
    float media;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    soma = somarValores(vetor, tamanho);
    media = (float)soma / tamanho;

    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    return 0;
}