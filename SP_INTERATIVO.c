#include <stdio.h>

int main (){

    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float densidade1, densidade2;
    int PT1, PT2;
    int opcao;

    printf("Jogo de Super-Trunfo\n");
    printf("\n");
    
    // Carta 1 coleta dados

    printf("Preencha as informacoes da carta 1:\n");
    printf("\n");
    printf("Digite o nome do pais:");
         scanf(" %s", &pais1);
    printf("Digite a populacao do pais:");
        scanf("%d", &populacao1);
    printf("Digite a area do pais:");
         scanf("%f", &area1);
    printf("Quantidade de pontos turisticos:");
        scanf("%d", &PT1);
    printf("\n");

    // Carta 2 coleta dados

    printf("Preencha as informacoes da carta 2:\n");
    printf("\n");

    printf("Digite o nome do pais:");
    scanf(" %s", &pais2);
    printf("Digite a populacao do pais:");
    scanf("%d", &populacao2);
    printf("Digite a area do pais:");
    scanf("%f", &area2);
    printf("Quantidade de pontos turisticos:");
    scanf("%d", &PT2);
    printf("\n");

    // Calcula densidade populacional

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // escolha do switch

    printf("Regras do jogo:\n");
    printf("\n");
    printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
    printf("\n");
    printf("Escolha uma opcao para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - Densidade Populacional\n");
    printf("4 - Pontos Turisticos\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao2){
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Populacao\n");
            printf("A carta 1 ganhou");
            printf("O pais %s tem maior populacao que o pais %s\n", pais1, pais2);
            printf("\n");
            printf("populacao da carta 1: %d\n", populacao1);
            printf("populacao da carta 2: %d\n", populacao2);
        } else if (populacao2 > populacao1){
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Populacao\n");
            printf("A carta 2 ganhou");
            printf("O pais %s tem maior populacao que o pais %s\n", pais2, pais1);
            printf("\n");
            printf("populacao da carta 1: %d\n", populacao1);
            printf("populacao da carta 2: %d\n", populacao2);
        } else {
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Populacao\n");
            printf("Os dois paises tem a mesma populacao\n");
        }
        break;
    case 2:
        if (area1 > area2){
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Area\n");
            printf("A carta 1 ganhou!");
            printf("O pais %s tem maior area que o pais %s.\n", pais1, pais2);
            printf("\n");
            printf("Area da carta 1: %d, Area da carta 2: %d.\n", area1, area2);
        } else if (area2 > area1){
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Area\n");
            printf("A carta 2 ganhou!");
            printf("O pais %s tem maior area que o pais %s. \n", pais2, pais1);
            printf("\n");
            printf("Area da carta 2: %d, Area da carta 1: %d.\n", area2, area1);
        } else {
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Area\n");
            printf("Os dois paises tem a mesma area\n");
        }
        break;
    case 3:
        if (densidade1 > densidade2){
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Densidade Demografica\n");
            printf("A carta 2 ganhou");
            printf("O pais %s tem menor densidade demorgafica que o pais %s.\n", pais2, pais1);
            printf("Densidade demografica do pais 1: %.2f\n", densidade1);
            printf("Densidade demografica do pais 2: %.2f\n", densidade2);

        } else if (densidade2 > densidade1){
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Densidade Demografica\n");
            printf("A carta 1 ganhou");
            printf("O pais %s tem menor densidade demografica que o pais %s. \n", pais1, pais2);
            printf("Densidade demografica do pais 1: %.2f\n", densidade1);
            printf("Densidade demografica do pais 2: %.2f\n", densidade2);

        } else {
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Densidade Demografica\n");
            printf("Os dois paises tem a mesma densidade demografica.\n");

            printf("Densidade demografica do pais 1 e 2: %.2f\n", densidade1);
            
        }
        break;
    case 4:
        if (PT1 > PT2){
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Pontos Turisticos\n");
            printf("A carta 1 tem mais pontos turisticos que a carta 2. \n");
        } else if (PT2 > PT1){
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
             printf("Comparacao de Pontos Turisticos\n");

            printf("A carta 2 tem mais pontos turisticos que a carta 1. \n");
        } else {
            printf("Pais da carta 1: %s\n", pais1);
            printf("Pais da carta 2: %s\n", pais2);
            printf("Comparacao de Pontos Turisticos\n");
            printf("As duas cartas tem a mesma quantidade de pontos turisticos.\n");
        }
        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }

    
    return 0;


}
