#include <stdio.h>

int main(){
    int pass;

    // Exibe o comando na tela e atribui o valor inserido à váriavel
    printf("Insira a senha de acesso (Ex: 1212): ");
    scanf("%i", &pass);
    fflush(stdin);

    printf("\n");

    // Verifica se a senha inserida é válida
    if(pass == 5555){
        printf("ACESSO PERMITIDO");
    }else{
        printf("ACESSO NEGADO");
    }

    return 0;
}