//Felipe Castillo
#include <stdio.h>

void maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os números são iguais.\n");
    }
}

int main() {
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    maiorNumero(num1, num2);
    return 0;
}