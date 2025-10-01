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

  char estado2[20];
  char codigo2[20];
  char cidade2[20];
  float populacao2;
  float area2;
  float pib2;
  int PT2;

  // Área para entrada de dados

  //carta 1

  prinf("Digite seu estado: \n");
  scanf("%s \n", &estado1);

  printf("Digite o codigo: \n");
  scanf("%s", &codigo1);

  printf("Digite a populaçao: \n");
  scanf("%d", &populacao1);

  printf("Digite a area: \n");
  scanf("%d", &area1);
  
  printf("Digite o pib: \n");
  scanf("%d", &pib1);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &PT1);

  //carta 2

    prinf("Digite seu estado: \n");
  scanf("%s \n", &estado2);

  printf("Digite o codigo: \n");
  scanf("%s", &codigo2);

  printf("Digite a populaçao: \n");
  scanf("%d", &populacao2);

  printf("Digite a area: \n");
  scanf("%d", &area2);
  
  printf("Digite o pib: \n");
  scanf("%d", &pib2);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &PT2);
  
  // Área para exibição dos dados da cidade
  
  printf("Carta 1: \n");
  
  printf("Estado: %s \n", estado1);
  printf("Codigo: %s" \n, codigo1);
  printf("Populaçao: %d \n", populacao1);
  printf("Area: %d \n", area1);
  printf("Pontos Turisticos: %d \n", PT1);

   printf("Carta 2: \n");
  
  printf("Estado: %s \n", estado2);
  printf("Codigo: %s" \n, codigo2);
  printf("Populaçao: %d \n", populacao2);
  printf("Area: %d \n", area2);
  printf("Pontos Turisticos: %d \n", PT2);
  

return 0;
} 
