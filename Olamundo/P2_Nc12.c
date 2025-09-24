#include <stdio.h>
int main() {
    char nome[50];
    int idade;
    float altura;
    int matricula;


    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("Olá, %s!\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Matrícula: %d\n", matricula);

    return 0;

    //




}