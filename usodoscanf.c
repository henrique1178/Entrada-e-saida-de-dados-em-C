#include <stdio.h>

int main(){
    int idade;
    float altura;
    double peso;
    char sexo;
    char nome[50];

    printf("Digite sua idade e sua altura\n");
    scanf("%d %f", &idade, &altura);
    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);
    printf("Digite seu peso\n");
    scanf("%lf", &peso);
    printf("Peso: %lf\n", peso);
    printf("Digite a inicial do seu sexo(M/F)\n");
    scanf(" %c", &sexo);
    printf("Sexo: %c\n", sexo);
    printf("Digite seu nome\n");
    scanf(" %s", nome);
    printf("Nome: %s\n", nome);

    return 0;
}