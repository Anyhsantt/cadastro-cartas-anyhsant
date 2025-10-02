#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado1[20];
  char codigo1[20];
  char cidade1[20];
  float populacao1;
  float area1;
  float pib1;
  int PT1;
  float Densi1;
  float Pibcap1;

  char estado2[20];
  char codigo2[20];
  char cidade2[20];
  float populacao2;
  float area2;
  float pib2;
  int PT2;
  float Densi2;
  float Pibcap2;

  // Área para entrada de dados

  //carta 1

  printf("Super Trunfo - Cadastro das Cartas \n");

  printf("\n");

  printf("Carta 1: \n");

  printf("Digite seu estado: \n");
  scanf("%s", estado1);

  printf("Digite o codigo: \n");
  scanf("%s", codigo1);

  printf("Digite sua cidade: \n");
  scanf("%s", cidade1);

  printf("Digite a populaçao: \n");
  scanf("%f", &populacao1);

  printf("Digite a area: \n");
  scanf("%f", &area1);
  
  printf("Digite o pib: \n");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &PT1);

  //carta 2

  printf("\n"); 

  printf("Carta 2: \n");

  printf("Digite seu estado: \n");
  scanf("%s", estado2);

  printf("Digite o codigo: \n");
  scanf("%s", codigo2);

  printf("Digite sua cidade: \n");
  scanf("%s", cidade2);

  printf("Digite a populaçao: \n");
  scanf("%f", &populacao2);

  printf("Digite a area: \n");
  scanf("%f", &area2);
  
  printf("Digite o pib: \n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &PT2);
  
  printf("\n");

  //Area para calculos de variaveis

  Densi1 = populacao1 / area1;
  Densi2 = populacao2 / area2;

  Pibcap1 = pib1 / populacao1;
  Pibcap2 = pib2 / populacao2;

  // Área para exibição dos dados da cidade

  //carta 1 info
  
  printf("Carta 1: \n");

  printf("\n");
  
  printf("Estado: %s \n", estado1);

  printf("Codigo: %s \n", codigo1);

  printf("Cidade: %s \n", cidade1);

  printf("Populaçao: %.2f \n", populacao1);

  printf("Area: %.2f km²\n", area1);

  printf("PIB: %.2f Bilhoes de reais\n", pib1);

  printf("Pontos Turisticos: %d \n", PT1);

  printf("Densidade populacional: %.2f hab/km²\n", Densi1);
  
  printf("Pib per Capta: %.2f\n", Pibcap1);

  printf("\n");

  //carta 2 info

  printf("Carta 2: \n");
  
  printf("\n");
  
  printf("Estado: %s \n", estado2);

  printf("Codigo: %s \n", codigo2);

  printf("Cidade: %s \n", cidade2);

  printf("Populaçao: %.2f \n", populacao2);

  printf("Area: %.2f km²\n", area2);

  printf("PIB: %.2f Bilhoes de reais\n", pib2);

  printf("Pontos Turisticos: %d \n", PT2);

  printf("Densidade populacional: %.2f hab/km²\n", Densi2);
  
  printf("Pib per Capta: %.2f\n", Pibcap2);

  return 0;
}
