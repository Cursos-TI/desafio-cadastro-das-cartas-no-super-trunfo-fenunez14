#include <stdio.h>

int main(){

    char estado1[10];
    char estado2[10];
    char codigo1[10];
    char codigo2[10];
    char nome1[20];
    char nome2[20];
    float populacao1;
    float populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos1;
    int pontos2;
    float densidade1, densidade2;
    float pibper1, pibper2;



    //Carta1
    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado1);
    
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Qual o nome da cidade?: \n");
    scanf("%s", nome1);

    printf("Qual o número de habitantes?: \n");
    scanf("%f", &populacao1);

    printf("Qual a área da cidade em KM²?: \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?: \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos na cidade?: \n");
    scanf("%d", &pontos1);



    //Carta2
     printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado2);
    
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Qual o nome da cidade?: \n");
    scanf("%s", nome2);

    printf("Qual o número de habitantes?: \n");
    scanf("%f", &populacao2);

    printf("Qual a área da cidade em KM²?: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?: \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos na cidade?: \n");
    scanf("%d", &pontos2);

    densidade1 = (populacao1 / area1);
    densidade2 = (populacao2 / area2);
    pibper1 = (pib1/populacao1);
    pibper2 = (pib2/populacao2);

    
    //Carta 1

    printf("carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", pibper1);

    //Carta 2

    printf("carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", pibper2);


return 0;

}