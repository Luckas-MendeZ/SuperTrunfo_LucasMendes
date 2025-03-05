#include <stdio.h>

int main(){
    char estado01[20],carta01[3], cidade01[40];
    int pop01, turismo01;
    float km01, pib01;
    printf("vamos criar sua primeira carta no super trunfo: cidades\n");
    printf("digite o estado da sua primeira carta: \n");
    scanf("char[20]",&estado01);
    printf("digite o codigo da carta: \n");
    scanf("char[20]",&carta01);
    printf("digite o nome da cidade: \n");
    scanf("char[40]",&cidade01);
    printf("qual o tamanho da populaçao: \n");
    scanf("int",&pop01);
    printf("qual a area em km: \n");
    scanf("%f", &km01);
    printf("qual o pib da cidade: \n");
    scanf("%f", &pib01);
    printf("quantos pontos turiscos tem: \n");
    scanf("%d", &turismo01);
    printf("Estado: \n", estado01);
    printf("Codigo de carta: \n", carta01);
    printf("Cidade: \n", cidade01);
    printf("População: \n", pop01);
    printf("Area: ", km01,"Km² \n");
    printf("P.I.B. : \n", pib01);
    printf("Pontos turiscos: \n", turismo01);

    return 0;
}
