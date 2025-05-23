#include <stdio.h>

int main(){
    printf("Desafio Xadrez!\n");
}

struct Carta {
    char codigo[4];
    char estado;
    char nome_cidade;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
}

int main(){
    struct carta1;
    struct carta2;
    printf("Cadastro da carta1: \n");
    printf("Informe o estado - (Letra A até H): ");
    scanf("%c", &carta1.estado);

    printf("Informe o código da carta: (ex.: A01)");
    scanf("%s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf("%[^\n]", carta1.nome_cidade);

    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a área: (km)");
    scanf("%f", &carta1.area);

    printf("Informe o PIB: (bilhões)");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("Cadastro da carta2: \n");
    printf("Informe o estado - (Letra A até H): ");
    scanf("%c", &carta2.estado);

    printf("Informe o código da carta: (ex.: A01)");
    scanf("%s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf("%[^\n]", carta2.nome_cidade);

    printf("Informe a população: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a área: (km)");
    scanf("%f", &carta2.area);

    printf("Informe o PIB: (bilhões)");
    scanf("%f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);



}


