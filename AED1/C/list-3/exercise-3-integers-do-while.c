#include <stdio.h>

int main(){
    int i = 10,
        end = 1,
        total = 0;

    // Loop para exibir e somar os números inteiros no intervalo de 10 à 1
    do{
        printf("%i ", i);
        total += i;
        i--;
    } while(i >= end);

    // Exibir o total da soma
    printf("= %i", total);

    return 0;
}