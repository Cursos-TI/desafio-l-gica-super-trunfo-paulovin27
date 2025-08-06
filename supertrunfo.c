#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[20], carta1[20], cidade1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_capita1;

    // Declaração de variáveis para a segunda carta
    char estado2[20], carta2[20], cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_capita2;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    scanf("%s", &estado1);
    printf("Código da carta: ");
    scanf("%s", carta1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo após a entrada
    densidade_populacional1 = populacao1 / area1;
    pib_capita1 = pib1 / populacao1;

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", carta2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo após a entrada
    densidade_populacional2 = populacao2 / area2;
    pib_capita2 = pib2 / populacao2;

    // Comparar o PIB entre as cartas
    if (pib1 > pib2) {
        printf("Carta 1: %.5f\n", pib1);
        printf("Carta 2: %.5f\n", pib2);
        printf("Resultado: Carta 1 %f venceu!\n", pib1);
    } else {
        printf("Carta 2: %.5f\n", pib2);
        printf("Carta 1: %.5f\n", pib1);
        printf("Resultado: Carta 2 %f venceu!\n", pib2);
    }

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_capita1);

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_capita2);

    return 0;
}
