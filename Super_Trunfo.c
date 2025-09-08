#include <stdio.h>

int main() {
    // Carta 1
    char estado1[2];
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2[2];
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
         // Cadastro da Carta 1
    printf("//Cadastro da Carta 1:// \n");

    printf("Letra do Estado: ");
    scanf("%s", estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);



          // Cálculos da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais


         //super poder 1
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Cadastro da Carta 2
    printf("\n//Cadastro da Carta 2:// \n");

    printf("Letra do Estado: ");
    scanf("%s", estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


         // Cálculos da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;


        //super poder 2
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            // Exibição das cartas
    printf("\n________________\n");
    printf("\n--- Carta 1 ---\n");
    printf("________________\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n________________\n");
    printf("\n--- Carta 2 ---\n");
    printf("________________\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    //comparação
    int vPopulacao = populacao1 > populacao2;
    int vArea = area1 > area2;
    int vPIB = pib1 > pib2;
    int vPontos = pontosTuristicos1 > pontosTuristicos2;
    int vDensidade = densidadePopulacional1 < densidadePopulacional2; // menor vence
    int vPIBpc = pibPerCapita1 > pibPerCapita2;
    int vSuperPoder = superPoder1 > superPoder2;

    //exibição das comparaçõs
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", vPopulacao ? 1 : 2, vPopulacao);
    printf("Área: Carta %d venceu (%d)\n", vArea ? 1 : 2, vArea);
    printf("PIB: Carta %d venceu (%d)\n", vPIB ? 1 : 2, vPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vPontos ? 1 : 2, vPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vDensidade ? 1 : 2, vDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vPIBpc ? 1 : 2, vPIBpc);
    printf("Super Poder: Carta %d venceu (%d)\n", vSuperPoder ? 1 : 2, vSuperPoder);


    return 0;
}
  