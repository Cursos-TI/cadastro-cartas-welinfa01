#include <stdio.h>

int main() {
    // DEFINIÇÃO DA CARTA 1
    char estado, cod_carta[4], cidade[50];
    int populacao, pontos_turisticos; 
    float area, pib; 
  
    // DADOS DA CARTA 1
    printf("Estados - Letras de A a H: ");
    scanf("%s", &estado);
    printf("Código da Carta: ");
    scanf("%s", &cod_carta); 
    printf("O nome da cidade: ");
    scanf("%s", &cidade);
    printf("Quantidade população: ");
    scanf("%d", &populacao);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Area da cidade: ");
    scanf("%f", &area);
    printf("PIB da cidade: ");
    scanf("%f", &pib);
    // DEFINIÇÃO DA CARTA 2
    char estado2, cod_carta2[4], cidade2[50];
    int populacao2, pontos_turisticos2; 
    float area2, pib2; 
  
    // DADOS DA CARTA 2
    printf("Estados - Letras de A a H: ");
    scanf("%s", &estado2);
    printf("Código da Carta: ");
    scanf("%s", &cod_carta2); 
    printf("O nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Quantidade população: ");
    scanf("%d", &populacao2);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Area da cidade: ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    
    // IMPRESSÕES CARTA 1
    printf("\n##### - CARTA 1 - #####\n");
    printf("O estado é: %c\n",estado);
    printf("O Código da Carta é: %s\n",cod_carta);
    printf("A cidade é: %s\n",cidade);
    printf("A população é de: %d\n",populacao);
    printf("A quantidade de pontos turisticos é de: %d\n",pontos_turisticos);
    printf("A area da cidade: %.4f\n",area);
    printf("O PIB é de: %.2f\n",pib);
    
    // IMPRESSÕES CARTA 2
    printf("\n##### - CARTA 2 - #####\n");
    printf("O estado é: %c\n",estado2);
    printf("O Código da Carta é: %s\n",cod_carta2);
    printf("A cidade é: %s\n",cidade2);
    printf("A população é de: %d\n",populacao2);
    printf("A quantidade de pontos turisticos é de: %d\n",pontos_turisticos2);
    printf("A area da cidade: %.4f\n",area2);
    printf("O PIB é de: %.2f\n",pib2);


return 0;
} 

/*
ESPAÇO PARA AUTO ANALISE:
Qual o grande problema desse desafio, talvez seja algo de extremo principiante, mas vamos la:
- O codigo nao quando eu escrevo o estado com espaço da ERRO;
- 
*/
