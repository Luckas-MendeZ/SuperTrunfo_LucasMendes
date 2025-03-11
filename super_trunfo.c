#include <stdio.h>

int main(){

    // Variaveis da primeira carta

    char estado1[20],codigo1[3], cidade1[40];
    int populacao1, turismo1;
    float area1, pib1, densidade1, pibPerCapita1;
    
    // Variaveis da segunda carta

    char estado2[20],codigo2[3], cidade2[40];
    int populacao2, turismo2;
    float area2, pib2, densidade2, pibPerCapita2;
    
    // cadastro da carta 1.

    printf("*** cadastro da primeira cidade ***\n");
    printf("Estado: \n");
        scanf("%s", estado1);
    printf("Codigo da carta: \n");
        scanf("%s", codigo1);
    printf("Nome da cidade: \n");
        scanf("%s", cidade1);
    printf("Populaçao: \n");
        scanf("%d", &populacao1);
    printf("Area em km²: \n");
        scanf("%f", &area1);
    printf("PIB: \n");
        scanf("%f", &pib1);
    printf("Numero de pontos turisticos: \n");
        scanf("%d", &turismo1);

    // Calculos da carta 1

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
   
    // cadastro da carta 2.

    printf("\nCadastro da segunda cidade\n");
    printf("Estado: \n");
        scanf("%s", estado2);
    printf("Codigo da carta: \n");
        scanf("%s", codigo2);
    printf("Nome da cidade: \n");
        scanf("%s", cidade2);
    printf("Populaçao: \n");
        scanf("%d", &populacao2);
    printf("Area em km²: \n");
        scanf("%f", &area2);
    printf("PIB: \n");
        scanf("%f", &pib2);
    printf("Numero de pontos turiscos: \n");
        scanf("%d", &turismo2);
    
    // Calculos da carta 2

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição da carta 1.

    printf("\n=== Carta 1 ===\n");
    printf("Codigo de carta: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("P.I.B.: %.2f\n", pib1);
    printf("Pontos turiscos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    // Exibição da carta 2.

    printf("\n=== Carta 2 ===\n");
    printf("Codigo de carta: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("P.I.B.: %.2f\n", pib2);
    printf("Pontos turiscos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
   

    return 0;
}
