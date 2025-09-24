# include <stdio.h>
int main() {
    char nome[30];
    int idade; 
    float altura;

    printf("Digite seu nome: ");
    scanf(" %s", &nome);
    

    printf("Digite sua altura: ");
    scanf(" %f", &altura);
    

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Olá, %s!\n", nome);
    printf("Altura: %.2f metros\n", altura);
    printf("Você tem %d anos.\n", idade);

}