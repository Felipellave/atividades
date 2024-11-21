#include <stdio.h>
//felipe castillo
int calcularSomatorio(int n) {
    int somatorio = 0;
    for (int i = 1; i <= n; i++) {
        somatorio += 5 * i * i + 2 * i + 8;
    }
    return somatorio;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = calcularSomatorio(n);
    printf("O resultado do somatório é: %d\n", resultado);

    return 0;
}
