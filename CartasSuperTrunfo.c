#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int nPontosTuristicos1, nPontosTuristicos2;
  unsigned long int populacao1, populacao2;
  float area1, pib1, area2, pib2;
  char estado1, estado2;
  char codigoCarta1[4], codigoCarta2[4];
  char nomeCidade1[20], nomeCidade2[20];

  float densidade1, pibPerCapita1, inversoDensidade1, superPoder1;
  float densidade2, pibPerCapita2, inversoDensidade2, superPoder2;

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
  inversoDensidade1 = 1.0 / densidade1;
  superPoder1 = populacao1 + area1 + pib1 + nPontosTuristicos1 + pibPerCapita1 + inversoDensidade1;

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
  densidade2 = (float)populacao2 / area2;
  pibPerCapita2 = (float)(pib2 * 1000000000.0) / populacao2;
  inversoDensidade2 = 1.0 / densidade2;
  superPoder2 = populacao2 + area2 + pib2 + nPontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

  // Coparações da Cartas
  int resultadoPopulacao = populacao1 > populacao2;
  int resultadoArea = area1 > area2;
  int resultadoPIB = pib1 > pib2;
  int resultadoPontos = nPontosTuristicos1 > nPontosTuristicos2;
  int resultadoDensidade = densidade1 < densidade2;
  int resultadoPIBperCapita = pibPerCapita1 > pibPerCapita2;
  int resultadoSuperPoder = superPoder1 > superPoder2;

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

  printf("\n===== Comparacao de Cartas =====\n");

  printf("Populacao: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
  printf("Area: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
  printf("PIB: Carta %d venceu (%d)\n", resultadoPIB ? 1 : 2, resultadoPIB);
  printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultadoPontos ? 1 : 2, resultadoPontos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidade ? 1 : 2, resultadoDensidade);
  printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPIBperCapita ? 1 : 2, resultadoPIBperCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);

  return 0;
}
