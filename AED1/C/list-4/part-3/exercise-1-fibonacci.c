#include <stdio.h>

int main(){
    int amount;

    printf("Insira a quantidade de elementos a serem exibidos (Ex: 10): ");
    scanf("%i", &amount);
    fflush(stdin);

    int pre2 = 0,
        pre1 = 0,
        num;

    // Loop para exibir a quantidade requerida pelo usuário
    for (int i = 0; i < amount; i++) {
        // Atribui valor 0 para a primeira exibição e 1 para a segunda, após isso começa somar os dois anteriores
        num = i == 0 ? 0 : pre2 < 1 ? 1 : pre2 + pre1;

        // Atribui o valor do último à variável do pnultimo
        pre2 = pre1;

        // Atribui o valor do número atual à variável do último
        pre1 = num;

        printf("%i ", num);
    }

    return 0;
}