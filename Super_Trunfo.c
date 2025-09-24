#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3], codigo1[4], cidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Carta 2
    char estado2[3], codigo2[4], cidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // Cadastro da Carta 1
    printf("//Cadastro da Carta 1:// \n");
    printf("Letra do Estado: ");
    scanf("%s", estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidadePopulacional1 = area1 != 0 ? populacao1 / area1 : 0;
    pibPerCapita1 = populacao1 != 0 ? (pib1 * 1000000000) / populacao1 : 0;

    // Cadastro da Carta 2
    printf("\n//Cadastro da Carta 2:// \n");
    printf("Letra do Estado: ");
    scanf("%s", estado2);
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidadePopulacional2 = area2 != 0 ? populacao2 / area2 : 0;
    pibPerCapita2 = populacao2 != 0 ? (pib2 * 1000000000) / populacao2 : 0;

    // Menu de atributos
    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Digite sua opção: ");
    scanf("%d", &atributo2);

    // Função para obter valor de atributo
    float obterValor(int atributo, int carta) {
        switch (atributo) {
            case 1: return carta == 1 ? populacao1 : populacao2;
            case 2: return carta == 1 ? area1 : area2;
            case 3: return carta == 1 ? pib1 : pib2;
            case 4: return carta == 1 ? pontosTuristicos1 : pontosTuristicos2;
            case 5: return carta == 1 ? densidadePopulacional1 : densidadePopulacional2;
            case 6: return carta == 1 ? pibPerCapita1 : pibPerCapita2;
            default: return 0;
        }
    }

    // Obter valores
    valor1_carta1 = obterValor(atributo1, 1);
    valor1_carta2 = obterValor(atributo1, 2);
    valor2_carta1 = obterValor(atributo2, 1);
    valor2_carta2 = obterValor(atributo2, 2);

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição
    printf("\n--- Comparação Final ---\n");
    printf("Carta 1 - %s\n", cidade1);
    printf("Carta 2 - %s\n", cidade2);

    printf("\nAtributo 1 (%d): %.2f vs %.2f\n", atributo1, valor1_carta1, valor1_carta2);
    printf("Atributo 2 (%d): %.2f vs %.2f\n", atributo2, valor2_carta1, valor2_carta2);
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Comparação final
    printf("\nResultado: ");
    if (soma1 > soma2) {
        printf("%s venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}