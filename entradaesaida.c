#include <stdio.h>

int main(){
    int idade = 18;
    float altura = 1.70;
    double peso = 63.5;
    char sexo = 'M';
    char nome[50] = "Henrique";

    printf("Idade: %d \n", idade);
    printf("Altura: %f \n", altura);
    printf("Peso :%lf \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);

    return 0;
}