#include <stdio.h> // Biblioteca padrão de entrada e saída
//OPERADORES ARITMÉTICOS, SIMPLES EXEMPLO
int main()
{
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;                        // Declaração de variáveis inteiras
    int soma, subtracao, multiplicacao, divisao; // Declaração de variáveis para armazenar resultados

    printf("Entre com o numero1:");
    scanf("%d", &numero1);
    printf("Entre com o numero2:");
    scanf("%d", &numero2);

    soma = numero1 + numero2;          // Operação de soma
    subtracao = numero1 - numero2;     // Operação de subtração
    multiplicacao = numero1 * numero2; // Operação de multiplicação
    divisao = numero1 / numero2;       // Operação de divisão

    printf("A soma é: %d\n", soma);                   // Exibe o resultado da soma
    printf("A subtração é: %d\n", subtracao);         // Exibe o resultado da subtração
    printf("A multiplicação é: %d\n", multiplicacao); // Exibe o resultado da multiplicação
    printf("A divisão é: %d\n", divisao);             // Exibe o resultado da divisão1

    return 0;
}