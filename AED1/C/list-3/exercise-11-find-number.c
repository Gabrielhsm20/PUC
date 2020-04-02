#include <stdio.h>
#include <stdbool.h>

int main(){
    int num = 0;
    bool stop = false;

    // Loop enquanto não encontrar o número que satisfaz a relação
    do{
        // Verificar se o número satisfaz a relação
        if(num % 3 == 2 && num % 5 == 3 && num % 7 == 4){
            // Como satisfaz, exibe o número em questão
            printf("O numero que satisfaz as relacoes e %i", num);

            stop = true; // Como satisfaz, para o loop
        }else{
            num++; // Como não satisfaz, pula para o próximo número e continua o loop
        }
    } while(!stop);

    return 0;
}