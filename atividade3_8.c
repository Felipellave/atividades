//Felipe Castillo
#include <stdio.h>

void exibirInverso(int vetor[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    exibirInverso(vetor, 10);
    return 0;
}
