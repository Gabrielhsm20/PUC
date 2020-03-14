#include <stdio.h>

int main(){
    float weight, height, imc;

    printf("Insira o peso (Ex: 60): ");
    scanf("%f", &weight);
    fflush(stdin);

    printf("Insira a altura (Ex: 1.7): ");
    scanf("%f", &height);
    fflush(stdin);

    imc = weight / pow(height, 2);

    printf("\nIMC: %0.2f", imc);

    return 0;
}