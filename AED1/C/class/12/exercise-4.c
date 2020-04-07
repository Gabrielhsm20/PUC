#include <stdio.h>

void smallestNumber(int *num1, int *num2, int *num3, int *num4, int *num5, int *smaller, int *address){
    if(*num1 <= *num2 && *num1 <= *num3 && *num1 <= *num4 && *num1 <= *num5){
        *address = &num1;
        *smaller = *num1;
    }else if(*num2 <= *num1 && *num2 <= *num3 && *num2 <= *num4 && *num2 <= *num5){
        *address = &num2;
        *smaller = *num2;
    }else if(*num3 <= *num1 && *num3 <= *num2 && *num3 <= *num4 && *num3 <= *num5){
        *address = &num3;
        *smaller = *num3;
    }else if(*num4 <= *num1 && *num4 <= *num2 && *num4 <= *num3 && *num4 <= *num5){
        *address = &num4;
        *smaller = *num4;
    }else{
        *address = &num5;
        *smaller = *num5;
    }
}

int main() {
    int num1, num2, num3, num4, num5, smaller, address;

    printf("Insira 5 numeros inteiros para visualizar o endereco na memoria de suas variaveis (Ex: 1 2 3 4 5): ");
    scanf("%i %i %i %i %i", &num1, &num2, &num3, &num4, &num5);
    fflush(stdin);

    smallestNumber(&num1, &num2, &num3, &num4, &num5, &smaller, &address);

    printf("O menor numero e %i e seu endereco e %p", smaller, address);

    return 0;
}