#include <stdio.h>

int main(){

    char estado1[10];
    char estado2[10];
    char codigo1[10];
    char codigo2[10];
    char nome1[20];
    char nome2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos1;
    int pontos2;



    //Carta1
    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%s", estado1);
    
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Qual o nome da cidade?: ");
    scanf("%s", nome1);

    printf("Qual o número de habitantes?: ");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade em KM²?: ");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?: ");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos na cidade?: ");
    scanf("%d", &pontos1);



    //Carta2
     printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%s", estado2);
    
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Qual o nome da cidade?: ");
    scanf("%s", nome2);

    printf("Qual o número de habitantes?: ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade em KM²?: ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?: ");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos na cidade?: ");
    scanf("%d", &pontos2);

    
    //Carta 1

    printf("carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);


    //Carta 2

    printf("carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);


return 0;

}