#include <stdio.h>

int main(){
    char estado01[20],carta01[3], cidade01[40], estado02[20],carta02[3], cidade02[40];
    int  turismo01, turismo02, pop01, pop02;
    float km01, pib01, km02, pib02, densidade1, densidade2, PpC1, PpC2;
    
    // cadastro da carta 1.

    printf("vamos criar sua primeira carta no super trunfo: cidades\n");
    printf("digite o estado da sua primeira carta: \n");
        scanf("%20s", estado01);
    printf("digite o codigo da carta: \n");
        scanf("%3s", carta01);
    printf("digite o nome da cidade: \n");
        scanf("%40s", cidade01);
    printf("qual o tamanho da populaçao: \n");
        scanf("%i", &pop01);
    printf("qual a area em km: \n");
        scanf("%f", &km01);
    printf("qual o pib da cidade: \n");
        scanf("%f", &pib01);
    printf("quantos pontos turiscos tem: \n");
        scanf("%d", &turismo01);
   
    // cadastro da carta 2.

    printf("vamos criar sua segunda carta. \n");
    printf("digite o estado da sua segunda carta: \n");
        scanf("%20s", estado02);
    printf("digite o codigo da carta: \n");
        scanf("%3s", carta02);
    printf("digite o nome da cidade: \n");
        scanf("%40s", cidade02);
    printf("qual o tamanho da populaçao: \n");
        scanf("%i", &pop02);
    printf("qual a area em km: \n");
        scanf("%f", &km02);
    printf("qual o pib da cidade: \n");
        scanf("%f", &pib02);
    printf("quantos pontos turiscos tem: \n");
        scanf("%d", &turismo02);
    
    // Calculo densidade demografica

    densidade1 = pop01 / km01;

    densidade2 = pop02 / km02;
    
    // Calculo PIB per capita

    PpC1 = pib01 / pop01;

    PpC2 = pib02 / pop02;

    // Exibição da carta 1.

    printf("Estado: %s \n", estado01);
    printf("Codigo de carta: %s \n", carta01);
    printf("Cidade: %s \n", cidade01);
    printf("População: %d \n", pop01);
    printf("Area: %fKm² \n", km01);
    printf("P.I.B.: %f \n", pib01);
    printf("Pontos turiscos: %d \n", turismo01);
    printf("Densidade populacional: %.2f \n", densidade1);
    printf("PIB per capita: %.2f \n", PpC1);

    // Exibição da carta 2.

    printf("Estado: %s \n", estado02);
    printf("Codigo de carta: %s \n", carta02);
    printf("Cidade: %s \n", cidade02);
    printf("População: %d \n", pop02);
    printf("Area: %fKm² \n", km02);
    printf("P.I.B.: %f \n", pib02);
    printf("Pontos turiscos: %d \n", turismo02);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("PIB per capita: %.2f \n", PpC2);
   

    return 0;
}
