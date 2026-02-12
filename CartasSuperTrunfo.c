#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, nPontosTuristicos1, populacao2, nPontosTuristicos2;
  float area1, pib1, area2, pib2;
  char estado1, estado2;
  char codigoCarta1[4], codigoCarta2[4];
  char nomeCidade1[20], nomeCidade2[20];

  float densidade1, pibPerCapita1;
  float densidade2, pibPerCapita2;

  // Área para entrada de dados
  // Cadastro Carta 1
  printf("Cadastro da Carta 1\n");

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Codigo da carta (01 a 04): ");
  scanf("%s", codigoCarta1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &nPontosTuristicos1);

  // Cálculos Carta 1
  densidade1 = populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

  // Cadastro Carta 2
  printf("Cadastro da Carta 2\n");

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Codigo da carta (01 a 04): ");
  scanf("%s", codigoCarta2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &nPontosTuristicos2);

  // Cálculos Carta 2
  densidade2 = (float) populacao2 / area2;
  pibPerCapita2 = (float) (pib2 * 1000000000.0) / populacao2;

  // Área para exibição dos dados da cidade
  printf("\n===== CARTA 1 =====\n");
  printf("Cidade: %s\n", nomeCidade1);
  printf("Estado: %c\n", estado1);
  printf("Codigo: %c%s\n", estado1, codigoCarta1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos Turisticos: %d\n", nPontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n===== CARTA 2 =====\n");
  printf("Cidade: %s\n", nomeCidade2);
  printf("Estado: %c\n", estado2);
  printf("Codigo: %c%s\n", estado2, codigoCarta2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", nPontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  return 0;
}
