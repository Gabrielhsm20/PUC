#include <stdio.h>

int main(){
    float weight, height, imc;

    // Exibe o comando na tela e atribui o valor inserido à váriavel
    printf("Insira o peso (Ex: 60): ");
    scanf("%f", &weight);
    fflush(stdin);

    // Exibe o comando na tela e atribui o valor inserido à váriavel
    printf("Insira a altura (Ex: 1.7): ");
    scanf("%f", &height);
    fflush(stdin);

    imc = weight / pow(height, 2);

    printf("\n");

    // Verifica e exibe a classificação do IMC
    if(imc < 18.5){
        printf("IMC: %0.2f\nClassificação: abaixo do peso", imc);
    }else if(imc < 24.9){
        printf("IMC: %0.2f\nClassificação: peso ideal", imc);
    }else if(imc < 29.9){
        printf("IMC: %0.2f\nClassificação: levemente acima do peso", imc);
    }else if(imc < 34.9){
        printf("IMC: %0.2f\nClassificação: obesidade grau I", imc);
    }else if(imc < 39.9){
        printf("IMC: %0.2f\nClassificação: obesidade grau II", imc);
    }else{
        printf("IMC: %0.2f\nClassificação: obesidade mórbida", imc);
    }

    return 0;
}