#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1, nota2, media, exame, frequencia;
    printf("digite a nota 1:");
    scanf("%F" , &nota1);

    printf("digite a nota 2");
    scanf("%F" , &nota2);

    printf("digite a frequencia em porcentagem ");
    scanf("%F" , &frequencia);

     media = nota1+ nota2 / 2;    

    if (media >= 6 && frequencia >= 75) {
        printf("Aluno aprovado!\n");
    } else if (media >= 4 && frequencia >= 60) {
        printf("Aluno em exame!\n");
        printf("Digite a nota do exame: ");
        scanf("%f", &exame);
        if (media + exame >= 10) {
            printf("Aluno aprovado por exame!\n");
        } else {
            printf("Aluno reprovado!\n");
        }
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;

}