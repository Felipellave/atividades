#include <stdio.h>
#include <stdlib.h>
//Felipe Castillo Llave
float mediaTurma(float *notas, int num_alunos) {
    if (num_alunos <= 0) return 0;
    
    float soma = 0;
    for (int i = 0; i < num_alunos; i++) {
        soma += notas[i];
    }
    return soma / num_alunos;
}

float mediaEscola(float *medias, int num_turmas) {
    if (num_turmas <= 0) return 0;

    float soma = 0;
    for (int i = 0; i < num_turmas; i++) {
        soma += medias[i];
    }
    return soma / num_turmas;
}

int main() {
    int num_turmas;

    // Entrada do número de turmas
    printf("Digite o número de turmas: ");
    scanf("%d", &num_turmas);

    float *medias = (float *)malloc(num_turmas * sizeof(float));
    if (medias == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < num_turmas; i++) {
        int num_alunos;

        // Entrada do número de alunos na turma
        printf("Digite o número de alunos da turma %d: ", i + 1);
        scanf("%d", &num_alunos);

        float *notas = (float *)malloc(num_alunos * sizeof(float));
        if (notas == NULL) {
            printf("Erro ao alocar memória!\n");
            free(medias);
            return 1;
        }

        // Entrada das notas dos alunos
        for (int j = 0; j < num_alunos; j++) {
            printf("Digite a nota do aluno %d da turma %d: ", j + 1, i + 1);
            scanf("%f", &notas[j]);
        }

        // Cálculo da média da turma
        medias[i] = mediaTurma(notas, num_alunos);
        printf("A média da turma %d é: %.2f\n", i + 1, medias[i]);

        // Libera a memória das notas
        free(notas);
    }

    // Cálculo da média geral da escola
    float media_escola = mediaEscola(medias, num_turmas);
    printf("A média geral da escola é: %.2f\n", media_escola);

    // Libera a memória das médias
    free(medias);

    return 0;
}