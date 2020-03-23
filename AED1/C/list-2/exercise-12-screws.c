#include <stdio.h>

int main(){
    int amount;
    float total, discount;

    // Exibe o comando na tela e atribui o valor inserido à váriavel
    printf("Digite a quantidade de parafusos que será comprada (Ex: 10): ");
    scanf("%i", &amount);
    fflush(stdin);

    // Verifica a quantidade inserida e retorna o valor a ser pago
    if(amount > 0){
        if(amount < 100){
            discount = 0;
        }else if(amount < 200){
            discount = 0.1;
        }else if(amount < 300){
            discount = 0.2;
        }else if(amount < 400){
            discount = 0.3;
        }else{
            discount = 0.4;
        }

        // Calcula o valor a ser pago
        total = amount*0.5*(1-discount);

        printf("Valor a ser pago: %0.2f (%0.2f%% de desconto)", total, discount*100);

    }else{
        printf("Quantidade inválida");
    }

    return 0;
}