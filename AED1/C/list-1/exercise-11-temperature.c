#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Insira a temperatura em graus celsius (Ex: 1000): ");
    scanf("%f", &celsius);
    fflush(stdin);

    fahrenheit = (celsius * 9.0/5) + 32;

    printf("\n%0.2f graus celsius equivale à %0.2f fahrenheit", celsius, fahrenheit);

    return 0;
}