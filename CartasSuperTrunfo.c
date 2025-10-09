#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, codigo1[4], nomecidade1[50];
  unsigned long int populacao1;
  int pontosturisticos1;
  float area1, pib1;
  float densidadepopulacional1;
  float pibpercapita1;
  float superpoder1;

  char estado2, codigo2[4], nomecidade2[50];
  unsigned long int populacao2;
  int pontosturisticos2;
  float area2, pib2;
  float densidadepopulacional2;
  float pibpercapita2;
  float superpoder2;

  // Área para entrada de dados

  printf("CADASTRO CARTA 01\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o Código da Carta - ex. A01: ");
  scanf("%s", &codigo1);

  printf("Digite o nome da Cidade: ");
  scanf(" %s", &nomecidade1);

  printf("Digite a População: ");
  scanf("%lu", &populacao1);

  printf("Difite a Área (em km²): ");
  scanf("%f", &area1);

  printf ("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Digite o número de Pontos Turisticos: ");
  scanf("%d", &pontosturisticos1);

  printf("CADASTRO CARTA 02\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o Código da Carta - ex. A01: ");
  scanf("%s", &codigo2);

  printf("Digite o nome da Cidade: ");
  scanf(" %s", &nomecidade2);

  printf("Digite a População: ");
  scanf("%lu", &populacao2);

  printf("Difite a Área (em km²): ");
  scanf("%f", &area2);

  printf ("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite o número de Pontos Turisticos: ");
  scanf("%d", &pontosturisticos2);

  //Calculos

  densidadepopulacional1 = (float)populacao1 / area1;
  pibpercapita1 = (pib1 * 1000000000) / populacao1;
  superpoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosturisticos1 + pibpercapita1 + (1.0 / densidadepopulacional1);

  densidadepopulacional2 = (float)populacao2 / area2;
  pibpercapita2 = (pib2 * 1000000000) / populacao2;
  superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2);

  // Área para exibição dos dados da cidade

  //carta 01
  printf("\n Carta 01 \n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomecidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2fkm²\n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Número de pontos Turísticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f habitantes por m²\n", densidadepopulacional1);
  printf("PIB per capita: %.2f reais\n", pibpercapita1);
  printf("Super Poder: %.2f\n", superpoder1);


  //carta 02
  printf("\n Carta 02 \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomecidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2fkm²\n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Número de pontos Turísticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f habitantes por m²\n", densidadepopulacional2);
  printf("PIB per capita: %.2f reais\n", pibpercapita2);
  printf("Super Poder: %.2f\n", superpoder2);

  //Comparações:

  printf("\nCOMPARAÇÕES DE CARTAS\n");
  printf("População: Carta 1 Venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 Venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 Venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 Venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

  printf("População: Carta 2 Venceu (%d)\n", populacao1 < populacao2);
  printf("Área: Carta 2 Venceu (%d)\n", area1 < area2);
  printf("PIB: Carta 2 Venceu (%d)\n", pib1 < pib2);
  printf("Pontos Turísticos: Carta 2 Venceu (%d)\n", pontosturisticos1 < pontosturisticos2);
  printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadepopulacional1 > densidadepopulacional2);
  printf("PIB per Capita: Carta 2 venceu (%d)\n", pibpercapita1 < pibpercapita2);
  printf("Super Poder: Carta 2 venceu (%d)\n", superpoder1 < superpoder2);

return 0;
} 
