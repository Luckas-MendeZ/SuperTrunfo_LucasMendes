#include <stdio.h>

int main(){

    // Variaveis da primeira carta

    char estado1[21],codigo1[4], cidade1[40];
    int turismo1;
    float area1, pib1, densidade1, pibPerCapita1, superpoder1;
    unsigned int populacao1;
    
    // Variaveis da segunda carta

    char estado2[20],codigo2[3], cidade2[40];
    int turismo2;
    float area2, pib2, densidade2, pibPerCapita2, superpoder2;
    unsigned int populacao2;
    
    // cadastro da carta 1.

    printf("*** cadastro da primeira cidade ***\n");
    printf("Codigo da carta: \n");
    scanf("%s", codigo1);
    printf("Estado: \n");
        scanf("%s", estado1);
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
    superpoder1 = (populacao1 + area1 + turismo1 + pib1 + pibPerCapita1) + (1 / densidade1);
    
   
    // cadastro da carta 2.

    printf("\nCadastro da segunda cidade\n");
    printf("Codigo da carta: \n");
        scanf("%s", codigo2);
    printf("Estado: \n");
        scanf("%s", estado2);
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
    superpoder2 = (populacao2 + area2 + turismo2 + pib2 + pibPerCapita2) + (1 / densidade2);

    // Exibição da carta 1.

    printf("\n=== Carta 1 ===\n");
    printf("Codigo de carta: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.3f Km²\n", area1);
    printf("P.I.B.: %.3f\n", pib1);
    printf("Pontos turiscos: %d\n", turismo1);
    printf("Densidade populacional: %.3f hab/km²\n", densidade1);
    printf("PIB per capita: %.3f\n", pibPerCapita1);
    printf("SUPER PODER: %.3f\n", superpoder1);

    // Exibição da carta 2.

    printf("\n=== Carta 2 ===\n");
    printf("Codigo de carta: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.3f Km²\n", area2);
    printf("P.I.B.: %.3f\n", pib2);
    printf("Pontos turiscos: %d\n", turismo2);
    printf("Densidade populacional: %.3f hab/km²\n", densidade2);
    printf("PIB per capita: %.3f\n", pibPerCapita2);
    printf("SUPER PODER: %.3f\n", superpoder2);

    // Comparação das cartas
    int rPop, rArea, rPIB, rTurismo, rDens, rPpc, rSP;
    rPop = populacao1 > populacao2;
    rArea = area1 > area2;
    rPIB = pib1 > pib2;
    rTurismo = turismo1 > turismo2;
    rDens = densidade1 > densidade2;
    rPpc = pibPerCapita1 > pibPerCapita2;
    rSP = superpoder1 > superpoder2;
    // Exibição da comparação das cartas
    printf("\n=== Resultado ===\n");
    printf("População: %d \n", rPop);
    printf("Area: %d \n", rArea);
    printf("P.I.B: %d \n", rPIB);
    printf("Pontos turisticos: %d \n", rTurismo);
    printf("Densidade populacional: %d \n", rDens);
    printf("PIB per Capita: %d \n", rPpc);
    printf("SUPER PODER: %d \n", rSP);

    return 0;
}
