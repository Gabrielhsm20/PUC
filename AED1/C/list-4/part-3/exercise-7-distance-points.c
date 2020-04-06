// Não entendi bem o comando da questão

#include <stdio.h>
#include <math.h>

int main(){
    float x1 = 1,
          y1 = 1,
          x2 = 1,
          y2 = 1,
          distance;

    // Loop enquanto os valores inseridos forem diferentes de 0
    do {

        // Exibe o comando na tela e atribui os valores inseridos às váriaveis
        printf("Digite o primeiro ponto catesiano (Ex: 10,10): ");
        scanf("%f,%f", &x1, &y1);
        fflush(stdin);

        // Exibe o comando na tela e atribui os valores inseridos às váriaveis
        printf("Digite o segundo ponto catesiano (Ex: 10,10): ");
        scanf("%f,%f", &x2, &y2);
        fflush(stdin);

        // Calcula a distância entre dois pontos: ((x2-x1)² + (y2-y1)²)^1/2
        distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

        printf("A distancia entre os pontos (%0.2f, %0.2f) e (%0.2f, %0.2f) e: %0.2f", x1, y1, x2, y2, distance);
    
    } while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0);

    return 0;
}