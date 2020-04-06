#include <stdio.h>

int main(){
    int num,
        position,
        result;

    printf("Insira um numero inteiro (Ex: 4567): ");
    scanf("%i", &num);
    fflush(stdin);

    printf("Insira a posicao do numero que deseja exibir (Ex: 3): ");
    scanf("%i", &position);
    fflush(stdin);

    // Loop enquanto i partindo de 0 for menor que a posição requerida pelo usuário
    for (int i = 0; i < position; i++) {
        // Atribui à variável result o resto da divisão de num por 10
        result = num % 10;

        // Divide num por 10 para o próximo loop
        num /= 10;
    }

    /*
        Exibe o último valor (resto de num por 10) atribuído à variável result
        que equivale ao número da posição requerida pelo usuário
    */
    printf("%i", result);
    
    return 0;
}