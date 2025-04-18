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

    //
    int escolha1, escolha2;
    int pontos1 = 0, pontos2 = 0;
    
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
    
    printf("\n***Batalha***\n");
    printf("Escolha uma das opções a seguir: \n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. P.I.B\n");
    printf("4. Pontos turiscos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        printf("Populacao\n");
        if (populacao1 == populacao2)
        {
            printf("Empate\n");
        } else if (populacao1 > populacao2)
        {
            printf("%s tem mais populacao que %s\n", cidade1, cidade2);
            pontos1++;
        } else
        {
            printf("%s tem mais populacao que %s\n", cidade2, cidade1);
            pontos2++;
        }
        break;
        case 2:
        printf("Area\n");
        if (area1 == area2)
        {
            printf("Empate\n");
        } else if (area1 > area2)
        {
            printf("%s tem mais area que %s\n", cidade1, cidade2);
            pontos1++;
        } else
        {
            printf("%s tem mais area que %s\n", cidade2, cidade1);
            pontos2++;
        }
        break;
        case 3:
        printf("Pib\n");
        if (pib1 == pib2)
        {
            printf("Empate\n");
        } else if (pib1  > pib2)
        {
            printf("%s tem mais PIB que %s\n", cidade1, cidade2);
            pontos1++;
        } else
        {
            printf("%s tem mais PIB que %s\n", cidade2, cidade1);
            pontos2++;
        }
        break;
        case 4:
        printf("Pontos turisticos\n");
        if (turismo1 == turismo2)
        {
            printf("Empate\n");
        } else if (turismo1  > turismo2)
        {
            printf("%s tem mais pontos turisticos que %s\n", cidade1, cidade2);
            pontos1++;
        } else
        {
            printf("%s tem mais pontos turisticos que %s\n", cidade2, cidade1);
            pontos2++;
        }
        break;
        case 5:
        printf("Densidade populacional\n");
        if (densidade1 == densidade2)
        {
            printf("Empate\n");
        } else if (densidade1  > densidade2)
        {
            printf("%s tem mais densidade populacional que %s, por tanto %s venceu\n", cidade1, cidade2, cidade2);
            pontos2++;
        } else
        {
            printf("%s tem mais densidade populacional que %s, por tanto %s venceu\n", cidade2, cidade1, cidade1);
            pontos1++;
        }
        break;
        case 6:
        printf("Pib per capita\n");
        if (pibPerCapita1 == pibPerCapita2)
        {
            printf("Empate\n");
        } else if (pibPerCapita1  > pibPerCapita2)
        {
            printf("%s tem o PIB per Capita maior que %s\n", cidade1, cidade2);
            pontos1++;
        } else
        {
            printf("%s tem o PIB per Capita maior que %s\n", cidade2, cidade1);
            pontos2++;
        }
        break;
        case 7:
        printf("Super Poder\n");
        if (superpoder1== superpoder2)
        {
            printf("Empate\n");
        } else if (superpoder1  > superpoder2)
        {
            printf("%s tem o super poder maior que %s\n", cidade1, cidade2);
            pontos1++;
        } else
        {
            printf("%s tem o super poder maior que %s\n", cidade2, cidade1);
            pontos2++;
        }
        break;
    
    default:
    printf("opcao invalida\n");
        break;
    }
    
    // Comparação das cartas 2
    
    printf("\n***Batalha***\n");
    printf("Escolha uma das opções a seguir: \n");
    printf("*** OBS: Voce deve escolher um atributo diferente do primeiro ***\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. P.I.B\n");
    printf("4. Pontos turiscos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2)
    {
        printf("Escolha invalida\n");
    } else {
        switch (escolha2)
        {
        case 1:
            printf("Populacao\n");
            if (populacao1 == populacao2)
            {
                printf("Empate\n");
            } else if (populacao1 > populacao2)
            {
                printf("%s tem mais populacao que %s\n", cidade1, cidade2);
                pontos1++;
            } else
            {
                printf("%s tem mais populacao que %s\n", cidade2, cidade1);
                pontos2++;
            }
            break;
            case 2:
            printf("Area\n");
            if (area1 == area2)
            {
                printf("Empate\n");
            } else if (area1 > area2)
            {
                printf("%s tem mais area que %s\n", cidade1, cidade2);
                pontos1++;
            } else
            {
                printf("%s tem mais area que %s\n", cidade2, cidade1);
                pontos2++;
            }
            break;
            case 3:
            printf("Pib\n");
            if (pib1 == pib2)
            {
                printf("Empate\n");
            } else if (pib1  > pib2)
            {
                printf("%s tem mais PIB que %s\n", cidade1, cidade2);
                pontos1++;
            } else
            {
                printf("%s tem mais PIB que %s\n", cidade2, cidade1);
                pontos2++;
            }
            break;
            case 4:
            printf("Pontos turisticos\n");
            if (turismo1 == turismo2)
            {
                printf("Empate\n");
            } else if (turismo1  > turismo2)
            {
                printf("%s tem mais pontos turisticos que %s\n", cidade1, cidade2);
                pontos1++;
            } else
            {
                printf("%s tem mais pontos turisticos que %s\n", cidade2, cidade1);
                pontos2++;
            }
            break;
            case 5:
            printf("Densidade populacional\n");
            if (densidade1 == densidade2)
            {
                printf("Empate\n");
            } else if (densidade1  > densidade2)
            {
                printf("%s tem mais densidade populacional que %s, por tanto %s venceu\n", cidade1, cidade2, cidade2);
                pontos2++;
            } else
            {
                printf("%s tem mais densidade populacional que %s, por tanto %s venceu\n", cidade2, cidade1, cidade1);
                pontos1++;
            }
            break;
            case 6:
            printf("Pib per capita\n");
            if (pibPerCapita1 == pibPerCapita2)
            {
                printf("Empate\n");
            } else if (pibPerCapita1  > pibPerCapita2)
            {
                printf("%s tem o PIB per Capita maior que %s\n", cidade1, cidade2);
                pontos1++;
            } else
            {
                printf("%s tem o PIB per Capita maior que %s\n", cidade2, cidade1);
                pontos2++;
            }
            break;
            case 7:
            printf("Super Poder\n");
            if (superpoder1== superpoder2)
            {
                printf("Empate\n");
            } else if (superpoder1  > superpoder2)
            {
                printf("%s tem o super poder maior que %s\n", cidade1, cidade2);
                pontos1++;
            } else
            {
                printf("%s tem o super poder maior que %s\n", cidade2, cidade1);
                pontos2++;
            }
            break;
        
        default:
        printf("opcao invalida\n");
            break;
        }
        printf("\nPlacar Final\n");
        printf("%s possui: %d ponto(s)\n", cidade1, pontos1);
        printf("%s possui: %d ponto(s)\n", cidade2, pontos2);
        if (pontos1 > pontos2)
        {
            printf("%s GANHOU", cidade1);
        } else if (cidade2 > cidade1)
        {
            printf("%s GANHOU", cidade2);
        } else
        {
            printf("Ambas as cidades empataram");
        }
    
    }
    return 0;
}