#include <stdio.h>
#include <string.h>

int main() {
    
    float nota1, nota2, media, exame, frequencia;

    printf("Digite a Nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a Nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a Frequencia (em porcentagem): ");
    scanf("%f", &frequencia);

    media = (nota1 + nota2) / 2;

    if (media >= 6 && frequencia >= 75) {
        printf("Aluno aprovado!\n");
    } else if (media >= 4 && frequencia >= 60) {
        printf("Aluno em exame...\n");
        getchar(); 
        printf("Digite a nota do exame: ");
        scanf("%f", &exame);
        if ((media + exame) / 2 >= 5) { 
            printf("Aluno aprovado por exame!\n");
        } else {
            printf("Aluno reprovado!\n");
        }
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}
