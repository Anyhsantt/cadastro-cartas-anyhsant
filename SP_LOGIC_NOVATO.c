#include <stdio.h>


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

  char estado2[20];
  char codigo2[20];
  char cidade2[20];
  float populacao2;
  float area2;
  float pib2;
  int PT2;
  float Densi2;

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

  // Área para comparação das cartas e definição do vencedor

    printf("Comparação das Cartas \n");
    printf("\n");
    printf("Carta 1: %s: Densidade populacional: %2.f  hab/km² \n", cidade1, Densi1);
    printf("carta 2: %s: Densidade populacional: %2.f  hab/km² \n", cidade2, Densi2);
    printf("\n");
  

    if(Densi1 > Densi2){
       printf("A carta 2 venceu pela Densidade Populacional menor! \n");
    }
    else{
      printf("A carta 1 venceu pela Densidade Populacional menor! \n");
      }

  return 0;
}
