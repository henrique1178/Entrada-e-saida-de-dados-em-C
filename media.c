#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite a idade:");
    scanf("%d", &idade);

    printf("Digite seu número de matricula: ");
    scanf("%d", &matricula);

    printf("Digite a sua Altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf(" %s", nome);

    printf("Suas informaçãoes: \n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Altura: %.2f\n", altura);

    return 0;
}