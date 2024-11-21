// Felipe castillo
#include <stdio.h>

int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    int posicao = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    // Ajuste para exibir a posição em base 1 (iniciando em 1, em vez de 0)
    printf("Maior valor: %d na posição %d\n", maior, posicao + 1);
    return maior;
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

    encontrarMaior(vetor, tamanho);
    return 0;
}