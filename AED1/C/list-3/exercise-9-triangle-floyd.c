#include <stdio.h>

int main(){
    int height, num = 1;

    printf("Insira a altura do triangulo (Ex: 10): ");
    scanf("%i", &height);
    fflush(stdin);

    // Loop que define a quantidade de linhas do triângulo de acordo com a altura inserida pelo usuário
    for(int row = 1; row <= height; row++){
        // Loop para exibir números em sequência até a quantidade de colunas ficar igual à de linhas
        for(int col = 1; col <= row; col++){
            printf("%i ", num++);
        }
        printf("\n");
    }

    return 0;
}