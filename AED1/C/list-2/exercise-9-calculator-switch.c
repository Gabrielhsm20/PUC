#include <stdio.h>

int main(){
    float num1, num2;
    char operation;

    // Exibe o comando na tela e atribui os valores inseridos às váriaveis
    printf("Insira dois números (Ex: 10 10): ");
    scanf("%f %f", &num1, &num2);
    fflush(stdin);

    // Exibe o comando na tela e atribui o valor inserido à váriavel
    printf("Insira uma das operações matemáticas abaixo:");
    printf("\n+ | Adição");
    printf("\n- | Subtração");
    printf("\n/ | Divisão");
    printf("\n* | Multiplicação");
    printf("\n: ");
    scanf("%c", &operation);
    fflush(stdin);

    // Verifica a operação inserida e exibe o resultado
    switch (operation){
        case '+':
        printf("Resultado: %f", num1+num2);
        break;

        case '-':
        printf("Resultado: %f", num1-num2);
        break;

        case '*':
        printf("Resultado: %f", num1*num2);
        break;

        case '/':
        printf("Resultado: %f", num1/num2);
        break;

        default:
        printf("Operação inválida");
        break;
    }

    return 0;
}