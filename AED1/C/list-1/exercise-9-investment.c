#include <stdio.h>

int main(){
    float capital, rate, months;

    printf("Insira o valor a ser investido (Ex: 1000): ");
    scanf("%f", &capital);
    fflush(stdin);

    printf("Insira a taxa de juros mensal (Ex: 10.5): ");
    scanf("%f", &rate);
    fflush(stdin);

    printf("Insira o número de meses (Ex: 12): ");
    scanf("%f", &months);
    fflush(stdin);

    float juros = capital * (rate/100) * months;
    float amount = capital + juros;

    printf("\nOs juros rendidos serão de %0.2f e o valor total acumulado será de %0.2f", juros, amount);

    return 0;
}