#include <stdio.h>


struct Carta {
    char codigo[4];
    char estado;
    char nome_cidade[100];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main(){
    struct Carta carta1;
    struct Carta carta2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    printf("Cadastro da carta1: \n");
    printf("Informe o estado - (Letra A até H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o código da carta: (ex.: A01)");
    scanf(" %s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome_cidade);

    printf("Informe a população: ");
    scanf(" %d", &carta1.populacao);

    printf("Informe a área: (km²)");
    scanf(" %f", &carta1.area);

    printf("Informe o PIB: (bilhões)");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &carta1.pontos_turisticos);

    printf("Cadastro da carta2: \n");
    printf("Informe o estado - (Letra A até H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o código da carta: (ex.: A01)");
    scanf(" %s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome_cidade);

    printf("Informe a população: ");
    scanf(" %d", &carta2.populacao);

    printf("Informe a área: (km²)");
    scanf(" %f", &carta2.area);

    printf("Informe o PIB: (bilhões)");
    scanf(" %f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf(" %d", &carta2.pontos_turisticos);

    densidade1 = carta1.populacao / carta1.area;
    pibpercapita1 = (carta1.pib * 1000000000 / carta1.populacao);

    densidade2 = carta2.populacao / carta2.area;
    pibpercapita2 = (carta2.pib * 1000000000 / carta2.populacao);

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %n\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Números de pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %n\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Números de pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;

}


