#include <stdio.h>

int main (void)

{
//|||---- ENTRADA DE DADOS CARTA 1 ----|||

char estado1[3], codigo1[5], nomecidade1[50];
unsigned int populacao1, pontosturisticos1, opcao;
float area1, pib1, densidade1, pibcapita1;

//|||---- ENTRADA DE DADOS CARTA 2 ----|||

char estado2[3], codigo2[5], nomecidade2[50];
unsigned int populacao2, pontosturisticos2;
float area2, pib2, densidade2, pibcapita2;


printf("┌─────────────────────────────────┐\n");
printf("│ Bem vindo ao jogo Super Trunfo !│\n");
printf("│                                 │\n");
printf("│Digite as informações da carta 1 │\n");
printf("└─────────────────────────────────┘\n");

printf("Digite o ESTADO da Carta 1: \n");
scanf("%s", &estado1);

printf("Digite o CODIGO da Carta 1: \n");
scanf("%s", &codigo1);

printf("Digite a CIDADE da Carta 1: \n");
scanf("%s", &nomecidade1);

printf("Digite a POPULAÇÃO da Carta 1: \n");
scanf("%u", &populacao1);

printf("Digite O TAMANHO DA AREA da Carta 1: \n");
scanf("%f", &area1);

printf("Digite O PIB da Carta 1: \n");
scanf("%f", &pib1);

printf("Digite A QUANTIDADE DE PONTOS TURISTICOS da Carta 1: \n");
scanf("%u", &pontosturisticos1);


printf("┌─────────────────────────────────┐\n");
printf("│ Digite as informações da carta 2│\n");
printf("└─────────────────────────────────┘\n");

printf("Digite o ESTADO da Carta 2: \n");
scanf("%s", &estado2);

printf("Digite o CODIGO da Carta 2: \n");
scanf("%s", &codigo2);

printf("Digite a CIDADE da Carta 2: \n");
scanf("%s", &nomecidade2);

printf("Digite a POPULAÇÃO da Carta 2: \n");
scanf("%u", &populacao2);

printf("Digite O TAMANHO DA AREA da Carta 2: \n");
scanf("%f", &area2);

printf("Digite O PIB da Carta 2: \n");
scanf("%f", &pib2);

printf("Digite A QUANTIDADE DE PONTOS TURISTICOS da Carta 2: \n");
scanf("%u", &pontosturisticos2);

// ||| -------- CALCULOS --------

densidade1 = populacao1 / area1;
pibcapita1 = pib1 / populacao1;

densidade2 = populacao2 / area2;
pibcapita2 = pib2 / populacao2;

////////////////////////////////////////

// ||| ------- RESULTADOS -------

    printf("┌─────────────────────────────────┐\n");
    printf("│                                 │\n");
    printf("│     RESULTADO DA CARTA 1        │\n");
    printf("│                                 │\n");
    printf("└─────────────────────────────────┘\n");

    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Area: %.2fkm²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Quantidade pontos turisticos: %u\n", pontosturisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per CAPITA: %f\n", pibcapita1);

////////////////////////////////////////////////////////////////

    printf("┌─────────────────────────────────┐\n");
    printf("│                                 │\n");
    printf("│     RESULTADO DA CARTA 2        │\n");
    printf("│                                 │\n");
    printf("└─────────────────────────────────┘\n");

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Quantidade pontos turisticos: %u\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per CAPITA: %f\n", pibcapita2);

    ///////////////////////////////////////////////////////////////

    printf("\n┌─────────────────────────────────┐\n");
    printf("│ MENU DE COMPARAÇÃO              \n");
    printf("│                                 \n");
    printf("│ Escolha um atributo:            \n");
    printf("│ 1. População                    \n");
    printf("│ 2. Área                         \n");
    printf("│ 3. PIB                          \n");
    printf("│ 4. Pontos Turísticos            \n");
    printf("│ 5. Densidade Populacional       \n");
    printf("│ 6. PIB per Capita               \n");
    printf("│                                 \n");
    printf("└─────────────────────────────────┘\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: // POPULACAO
            printf("Atributo escolhido: POPULACAO\n");
            printf("\nCarta 1 - %d\n", populacao1);
            printf("Carta 2 - %d\n", populacao2);

         if (populacao1 > populacao2)
         {
            printf("\nCARTA 1 VENCEU!");
         } else if(populacao2 > populacao1){
            printf("\nCARTA 2 VENCEU!");
         } else {
            printf("\nEmpate!");
         }
         break;

        case 2: // AREA
            printf("Atributo escolhido: AREA");
            printf("\nCarta 1 - %.2f", area1);
            printf("\nCarta 2 - %.2f", area2);

         if (area1 > area2)
         {
            printf("\nCARTA 1 VENCEU!");
         } else if (area2 > area1){
            printf("\n CARTA 2 VENCEU!");
         } else {
            printf("\nEmpate!");
         }
        break;
         
        case 3: // PIB
            printf("Atributo escolhido: PIB");
            printf("\nCarta 1 - %f", pib1);
            printf("\nCarta 2 - %f", pib2);
          
         if (pib1 > pib2){
            printf("\n CARTA 1 VENCEU!");
         } else if (pib1 > pib2){
            printf("\nCARTA 2 VENCEU!");
         } else {
            printf("\nEmpate!");
         }
          break;

        case 4: // Pontos Turisticos
            printf("Atributo escolhido: PONTOS TURISTICOS");
            printf("\nCarta 1 - %u", pontosturisticos1);
            printf("\nCarta 2 - %u", pontosturisticos2);

         if (pontosturisticos1 > pontosturisticos2){
            printf("\nCARTA 1 VENCEU!");
         } else if (pontosturisticos2 > pontosturisticos1){
            printf("\nCARTA 2 VENCEU!");
         } else {
            printf("\nEMPATE!");
         }
          break;

        case 5: // DENSIDADE POPULACIONAL
            printf("Atributo escolhido: Densidade Populacional");
            printf("\nCarta 1 - %f", densidade1);
            printf("\nCarta 2 - %f", densidade2);

         if (densidade1 > densidade2){
            printf("\nCARTA 1 VENCEU!");
         } else if (densidade2 > densidade1){
            printf("\nCARTA 2 VENCEU!");
         } else {
            printf("\nEMPATE !");
         }
          break;

        case 6: // PIB PER CAPITA
            printf("Atributo escolhido: PIB PER CAPITA");
            printf("\nCarta 1 - %f", pibcapita1);
            printf("\nCarta 2 - %f", pibcapita2);

         if (pibcapita1 > pibcapita2){
            printf("\nCARTA 1 VENCEU!");
         } else if (pibcapita2 > pibcapita1){
            printf("\nCARTA 2 VENCEU!");
         } else{
            printf("\nEMPATE!");
         }
          break;

        default:
           printf("\nESCOLHA ERRADA! Escolhe um numero entre 1-6 \n");
        break;
         


        
        
        

            


    }








return 0;





}

