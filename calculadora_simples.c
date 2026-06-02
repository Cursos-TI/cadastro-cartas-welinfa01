#include <stdio.h>

int main(){
    //Variaveis
    int var1, var2, soma, subtracao, multiplicacao, divisao;
    printf("Digite o primeiro valor? ");
    scanf("%d", &var1);
    printf("Digite o Segundo valor? ");
    scanf("%d", &var2);
    
    //Calculo
    soma = var1 + var2;
    subtracao = var1 - var2;
    multiplicacao = var1 * var2;
    divisao = var1/var2;

    //Impressao
    printf("O primeiro valor é %d e o segundo é %d \n", var1, var2);
    printf("A soma é %d \n", soma);
    printf("A subtração é %d \n", subtracao);
    printf("A multiplicação é %.2f \n", multiplicacao);
    printf("A Divisão é %.2f \n", divisao);
    return 0;
} 
