#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char Estado1[50], Estado2[50];    
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicos1, pontosTuristicos2;

    //--------Entrada de dados da primeira carta--------

    printf("----Super Trunfo de Paises----\n");
    printf("----Dados da primeira carta----\n");

    printf("Digite o Estado da primeira carta: \n");
    scanf("%s", Estado1);

    printf("Digite o codigo da primeira carta(letra do estado + numero, ex: A01): \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &areaCidade1);

    printf("Digite o PIB: \n");
    scanf("%f", &pibCidade1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);


    //--------Exibindo os dados da primeira carta--------
    printf("\n-----Carta 1-----\n");

    printf("Estado: %s - Codigo da carta: %s\n", Estado1, codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area(km2): %.3f\n", areaCidade1);
    printf("PIB: %.3f\n", pibCidade1);
    printf("Pontos turisticos: %d\n\n", pontosTuristicos1);

   
    //--------Entrada de dados da segunda carta--------
    printf("\n----Dados da segunda carta----\n");

    printf("Digite o Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o codigo da segunda carta(letra do estado + numero, ex: B01): \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &areaCidade2);

    printf("Digite o PIB: \n");
    scanf("%f", &pibCidade2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);


    //--------Exibindo os dados da segunda carta--------    
    printf("\n-----Carta 2-----\n");

    printf("Estado: %s - Codigo da carta: %s\n", Estado2, codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area(km2): %.3f\n", areaCidade2);
    printf("PIB: %.3f\n", pibCidade2);
    printf("Pontos turisticos: %d\n\n", pontosTuristicos2);

    return 0;
}
