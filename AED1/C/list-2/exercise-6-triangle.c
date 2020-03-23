#include <stdio.h>

int main(){
    float a, b, c;

    // Exibe o comando na tela e atribui os valores inseridos às váriaveis
    printf("Insira os três ângulos de um triângulo (Ex: 60 60 60): ");
    scanf("%f %f %f", &a, &b, &c);
    fflush(stdin);

    printf("\n");
    
    // Verifica se os valores inseridos satisfaz à condição de existência de um triângulo
    if((a+b) > c && (a+c) > b && (b+c) > a && (a+b+c) == 180){
        if(a < 90 && b < 90 && c < 90){
            printf("Triângulo acutângulo");
        }else if(a == 90 || b == 90 || c == 90){
            printf("Triângulo retângulo");
        }else if(a > 90 || b > 90 || c > 90){
            printf("Triângulo obtusângulo");
        }else{
            printf("Erro");
        }
    }else{
        printf("Triângulo inexistente");
    }

    return 0;
}