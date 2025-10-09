#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20];
  char codigo1[20];
  char nomecidade1[50];
  int populacao1, pontosturisticos1;
  float area1, pib1;

  char estado2, codigo2[4], nomecidade2[50];
  int populacao2, pontosturisticos2;
  float area2, pib2;

  // Área para entrada de dados

  printf("CADASTRO CARTA 01\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o Código da Carta - ex. A01: ");
  scanf("%s", &codigo1);

  printf("Digite o nome da Cidade: ");
  scanf(" %s", &nomecidade1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

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
  scanf("%d", &populacao2);

  printf("Difite a Área (em km²): ");
  scanf("%f", &area2);

  printf ("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite o número de Pontos Turisticos: ");
  scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade

  //carta 01
  printf("\n Carta 01 \n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomecidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2fkm²\n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Número de pontos Turísticos: %d\n", pontosturisticos1);


  //carta 02
  printf("\n Carta 02 \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomecidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2fkm²\n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Número de pontos Turísticos: %d\n", pontosturisticos2); 

return 0;
} 
