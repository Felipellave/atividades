#include <stdio.h>
//felipe castillo
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, resultado;

    for (int i = 2; i <= n; i++) {
        resultado = a + b;
        a = b;
        b = resultado;
    }
    return resultado;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int resultado = fibonacci(n);
    printf("O %d-esimo termo da serie de Fibonacci e: %d\n", n, resultado);
    
    return 0;
}
