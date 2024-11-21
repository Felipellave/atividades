#include <stdio.h>
//felipe castillo
// Protótipo da função
int somar(int a, int b);

int main() {
    int num1, num2, resultado;

    // Solicita dois números inteiros do usuário
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Chama a função para calcular a soma
    resultado = somar(num1, num2);

    // Exibe o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}

// Definição da função somar
int somar(int a, int b) {
    return a + b;
}