#include <stdio.h>
int main() {
    
    int idade = 20; //Os inteiros são números sem casas decimais. Eles são usados quando você precisa contar ou trabalhar com números inteiros. Por exemplo, int idade = 25; armazena a idade de uma pessoa.
    int ano = 2023;
    int quantidade = 1500; 
    float altura = 1.75; //Os números de ponto flutuante são usados para representar números com casas decimais. Existem dois tipos principais: float e double . A diferença entre eles é a precisão. float ocupa menos espaço na memória, mas tem menos precisão do que double.
    float temperatura = 36.5;
    char letra = 'A';   //O tipo char armazena caracteres como números inteiros que representam sua posição na tabela ASCII (American Standard Code for Information Interchange). A tabela ASCII mapeia caracteres (letras, números, símbolos) para números de 0 a 127. Por exemplo, o caractere 'A' é representado pelo número 65.
    char cidade[30] = "Cuiaba";
    char nome[30] = "Edemilson";
    double peso = 70.5;
    double saldo = 1000.50;
    double salario = 2500.75;
    printf("Olá, %s! Você tem %d anos e mora em %s.\n", nome, idade, cidade);
    printf("Sua altura é %.2f metros e seu peso é %.2f kg.\n", altura, peso);
    printf("A temperatura atual é %.1f graus Celsius.\n", temperatura);
    printf("Seu saldo bancário é %.2f e seu salário é %.2f.\
n", saldo, salario);
    printf("Estamos no ano de %d e você tem %d amigos.\n", ano, quantidade);
    printf("A primeira letra do alfabeto é '%c'.\n", letra);
    return 0;
}