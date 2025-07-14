#include <stdio.h>

int main() {
    char estado1[30];
    char codigo1[30];
    char nome1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibper1;
    float superPoder1;

    char estado2[30];
    char codigo2[30];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibper2;
    float superPoder2;

    printf("--- Dados da Carta 1 ---\n");
    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado1);

    printf("A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Qual o nome da cidade?: \n");
    scanf(" %[^\n]%*c", nome1);

    printf("Qual o numero de habitantes?: \n");
    scanf("%lu", &populacao1);

    printf("Qual a area da cidade em KM²?: \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?: \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos na cidade?: \n");
    scanf("%d", &pontos1);

    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0.0f;
    pibper1 = (populacao1 > 0) ? pib1 / (float)populacao1 : 0.0f;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibper1;
    superPoder1 += (densidade1 > 0) ? (1.0f / densidade1) : 0.0f;

    printf("\n");

    printf("--- Dados da Carta 2 ---\n");
    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado2);

    printf("A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Qual o nome da cidade?: \n");
    scanf(" %[^\n]%*c", nome2);

    printf("Qual o numero de habitantes?: \n");
    scanf("%lu", &populacao2);

    printf("Qual a area da cidade em KM²?: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?: \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos na cidade?: \n");
    scanf("%d", &pontos2);

    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0.0f;
    pibper2 = (populacao2 > 0) ? pib2 / (float)populacao2 : 0.0f;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibper2;
    superPoder2 += (densidade2 > 0) ? (1.0f / densidade2) : 0.0f;

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibper1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibper2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %s (%d)\n", (populacao1 > populacao2 ? "1 venceu" : "2 venceu"), (populacao1 > populacao2 ? 1 : 0));
    printf("Area: Carta %s (%d)\n", (area1 > area2 ? "1 venceu" : "2 venceu"), (area1 > area2 ? 1 : 0));
    printf("PIB: Carta %s (%d)\n", (pib1 > pib2 ? "1 venceu" : "2 venceu"), (pib1 > pib2 ? 1 : 0));
    printf("Pontos Turisticos: Carta %s (%d)\n", (pontos1 > pontos2 ? "1 venceu" : "2 venceu"), (pontos1 > pontos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %s (%d)\n", (densidade1 < densidade2 ? "1 venceu" : "2 venceu"), (densidade1 < densidade2 ? 1 : 0));
    printf("PIB per Capita: Carta %s (%d)\n", (pibper1 > pibper2 ? "1 venceu" : "2 venceu"), (pibper1 > pibper2 ? 1 : 0));
    printf("Super Poder: Carta %s (%d)\n", (superPoder1 > superPoder2 ? "1 venceu" : "2 venceu"), (superPoder1 > superPoder2 ? 1 : 0));

    return 0;
}