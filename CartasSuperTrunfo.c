#include <stdio.h>
/*
Não sei se o código ficou extremamente coerente.
*/
int main() {
    // DEFINIÇÃO DA CARTA 1
    char estado, cod_carta[4], cidade[50];
    unsigned int populacao, pontos_turisticos; 
    float area, pib, super_carta; 
    float densidade_demografica, pib_percapta;
    // DADOS DA CARTA 1
    printf("#### PRIMEIRA CARTA ####\n \n");
    printf("Estado : ");
    scanf("%s", &estado);
    printf("Código da Carta: ");
    scanf("%s", &cod_carta); 
    printf("O nome da cidade: ");
    scanf("%s", &cidade); //Aqui eu nao sei como alterar para que possa abrigar cidades com espaços
    printf("População: ");
    scanf("%d", &populacao);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Area da cidade: ");
    scanf("%f", &area);
    printf("PIB Cidade: ");
    scanf("%f", &pib);
    // DEFINIÇÃO DA CARTA 2
    char estado2, cod_carta2[4], cidade2[50];
    unsigned int populacao2, pontos_turisticos2;
    float area2, pib2, super_carta2; 
    float densidade_demografica2, pib_percapta2;
    // DADOS DA CARTA 2
    printf("\n#### SEGUNDA CARTA ####\n");
    printf("Estados: ");
    scanf("%s", &estado2);
    printf("Código da Carta: ");
    scanf("%s", &cod_carta2); 
    printf("Cidade: ");
    scanf("%s", &cidade2); //Aqui eu nao sei como alterar para que possa abrigar cidades com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Area da cidade: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    // CALCULOS DA 1 CARTA
    densidade_demografica = populacao/area;
    pib_percapta = pib/populacao;
    super_carta = populacao+pontos_turisticos+area+pib+densidade_demografica+pib_percapta;
    // CALCULOS DA 2 CARTA
    densidade_demografica2 = populacao2/area2;
    pib_percapta2 = pib2/populacao2;
    super_carta2 = populacao2+pontos_turisticos2+area2+pib2+densidade_demografica2+pib_percapta2;


    //COMPARAÇÕES

    printf("\n#####  Carta 1 = 1 e Carta 2 = 0  #####\n");
    printf("Area 1 %f e Area 2 %f: %d venceu\n",area, area2, area >= area2 );
    printf("População 1 %u e População 2 %u: %d venceu\n",populacao, populacao2, populacao >= populacao2 );
    printf("PIB 1 %f e PIB 2 %f: %d venceu\n",pib, pib2, pib >= pib2 );
    printf("Pontos Turisticos 1 %d e Pontos Turisticos 2 %d: %d venceu \n", pontos_turisticos, pontos_turisticos2, pontos_turisticos >= pontos_turisticos2 );
    printf("Densidade Populacional 1 %f e Densidade Populacional 2 %f: %d venceu\n", densidade_demografica, densidade_demografica2, densidade_demografica >= densidade_demografica2 );
    printf("PIB Per capta 1  %f e PIB Per capta 2 %f: %d venceu\n",pib_percapta, pib_percapta2, pib_percapta >= pib_percapta2 );
    printf("Super carta 1 %f e Super Carta 2 %f: %d venceu\n",super_carta, super_carta2, pib_percapta >= pib_percapta2 );
return 0;
} 

