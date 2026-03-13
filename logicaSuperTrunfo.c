#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
   char estado1[3];
   char codigo1[3];
   char nomeCidade1[50];
   unsigned int populacao1;
   float area1;
   float PIB1;
   unsigned int pontosTuristicos1;
   float densidade1;
   float pibcapita1;

   int opcao;

   char estado2[3];
   char codigo2[10];
   char nomeCidade2[50];
   unsigned int populacao2;
   float area2;
   float PIB2;
   unsigned int pontosTuristicos2;
   float densidade2;
   float pibcapita2;

//////////// ENTRADA DE DADOS DA CARTA 1 //////

   printf("\nDigite o ESTADO da carta 1: ");
   scanf("%s", &estado1);

   printf("\nDigite o CODIGO da carta 1: ");
   scanf("%s", &codigo1);

   printf("\nDigite o NOME DA CIDADE da carta 1: ");
   scanf("%s", &nomeCidade1);

   printf("\nDigite a POPULACAO da carta 1: ");
   scanf("%u", &populacao1);

   printf("\nDigite a AREA da carta 1: ");
   scanf("%f", &area1);

   printf("\nDigite o PIB da carta 1: ");
   scanf("%f", &PIB1);

   printf("\nDigite a quantidade de PONTOS TURISTICOS da carta 1: ");
   scanf("%u", &pontosTuristicos1);

   //////////// ENTRADA DE DADOS DA CARTA 2 //////

   printf("\nDigite o ESTADO da carta 2: ");
   scanf("%s", &estado2);

   printf("\nDigite o CODIGO da carta 2: ");
   scanf("%s", &codigo2);

   printf("\nDigite o NOME DA CIDADE da carta 2: ");
   scanf("%s", &nomeCidade2);

   printf("\nDigite a POPULACAO da carta 2: ");
   scanf("%u", &populacao2);

   printf("\nDigite a AREA da carta 2: ");
   scanf("%f", &area2);

   printf("\nDigite o PIB da carta 2: ");
   scanf("%f", &PIB2);

   printf("\nDigite a quantidade de PONTOS TURISTICOS da carta 2: ");
   scanf("%u", &pontosTuristicos2);

   //////////// CALCULOS ///////////////

   densidade1 = populacao1 / area1;
   densidade2 = populacao2 / area2;

   pibcapita1 =  PIB1 / populacao1;
   pibcapita2 =  PIB2 / populacao2;

   ///////// SAIDA DE DADOS CARTA 1 ////////////
   
   printf("\n-------- CARTA 1  ---------\n");

   printf("ESTADO da CARTA 1: %s\n", estado1);
   printf("CODIGO da CARTA 1: %s\n", codigo1);
   printf("NOME DA CIDADE da CARTA 1: %s\n", nomeCidade1);
   printf("POPULACAO da CARTA 1: %u\n", populacao1);
   printf("TAMANHO DA CIDADE da CARTA 1: %f\n", area1);
   printf("PIB da CIDADE da CARTA 1: %f\n", PIB1);
   printf("\nQUANTIDADE de PONTOS TURISTICOS da CARTA 1: %u\n", pontosTuristicos1);
   printf("DENSIDADE POPULACIONAL: %f\n", densidade1);
   printf("PIB PER CAPITA: %f\n", pibcapita1);

////////////// SAIDA DE DADOS CARTA 2 ////////////

   printf("\n-------- CARTA 2 ---------\n");

   printf("\nESTADO da CARTA 2: %s\n", estado2);
   printf("CODIGO da CARTA 2: %s\n", codigo2);
   printf("NOME DA CIDADE da CARTA 2: %s\n", nomeCidade2);
   printf("POPULACAO da CARTA 2: %u\n", populacao2);
   printf("TAMANHO DA CIDADE da CARTA 2: %f\n", area2);
   printf("PIB da CIDADE da CARTA 2: %f\n", PIB2);
   printf("\nQUANTIDADE de PONTOS TURISTICOS da CARTA 2: %u\n", pontosTuristicos2);
   printf("DENSIDADE POPULACIONAL: %f\n", densidade2);
   printf("PIB PER CAPITA: %f\n", pibcapita2);
   printf("\n                                       \n");
   printf("-----------------------------\n");

   /******************** COMPARACOES  ********************* */

   printf("\n MENU DE COMPARACOES \n");
   printf("\n                             \n");
   printf("\n ESCOLHA O ATRIBUTO A SER COMPARADO \n");
   printf("1 - População \n");
   printf("2 - Área \n");
   printf("3 - PIB \n");
   printf("4 - QUANTIDADE DE PONTOS TURISTICOS \n");
   printf("5 - DENSIDADE POPULACIONAL \n");
   printf("6 - PIB PER CAPITA \n");
   printf("\n                            \n");
   printf("Digite a sua escolha 1 - 6: ");
   scanf("%d", &opcao);

   switch (opcao)
   {
     case 1: /// POPULACAO
        printf("ATRIBUTO: POPULACAO \n");
        printf("\n               \n");
        printf("Carta 1 - %u\n", populacao1);
        printf("Carta 2 - %u\n", populacao2);
        break;
   }

























    return 0;
}
