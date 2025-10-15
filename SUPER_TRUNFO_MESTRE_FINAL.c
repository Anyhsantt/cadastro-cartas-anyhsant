#include <stdio.h>

int main (){

    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float densidade1, densidade2;
    int PT1, PT2;
    int primeiroatributo, segundoatributo;
    int resultado1, resultado2;



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

   // apresenta as regras do jogo

    printf("Regras do jogo:\n");
    printf("\n");
    printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
    printf("\n");

     // escolha do switch do primeiro atributo
    printf("Escolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - Densidade Populacional\n");
    printf("4 - Pontos Turisticos\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &primeiroatributo);
    printf("\n");

    switch (primeiroatributo)
    {
    case 1:
     // comparar populacao
        printf("Voce escolheu comparar populacao\n");
        resultado1 = (populacao1 > populacao2) ? 1 : 0;
    
        break;
    case 2:
      // comparar area
        printf("Voce escolheu comparar area\n");
        resultado1 = (area1 > area2) ? 1 : 0;
        break;
    case 3:
        // comparar densidade demografica
        printf("Voce escolheu comparar densidade demografica\n");
        resultado1 = (densidade1 < densidade2) ? 1 : 0;
        break;
    case 4:
        // comparar pontos turisticos
        printf("Voce escolheu comparar pontos turisticos\n");
        resultado1 = (PT1 > PT2) ? 1 : 0;
        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }

    // escolha do switch do segundo atributo
    printf("Escolha um segundo atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - Densidade Populacional\n");
    printf("4 - Pontos Turisticos\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &segundoatributo);
    printf("\n");

    
    if (segundoatributo == primeiroatributo){
        printf("Voce ja escolheu esse atributo, escolha outro\n");
        return 0;
       
    } else {

    switch (segundoatributo){

    case 1:
     // comparar populacao
        printf("Voce escolheu comparar populacao\n");
        resultado2 = (populacao1 > populacao2) ? 1 : 0;
    
        break;
    case 2:
      // comparar area
        printf("Voce escolheu comparar area\n");
        resultado2 = (area1 > area2) ? 1 : 0;
        break;
    case 3:
        // comparar densidade demografica
        printf("Voce escolheu comparar densidade demografica\n");
        resultado2 = (densidade1 < densidade2) ? 1 : 0;
        break;
    case 4:
        // comparar pontos turisticos
        printf("Voce escolheu comparar pontos turisticos\n");
        resultado2 = (PT1 > PT2) ? 1 : 0;
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
    if (resultado1 && resultado2){
        printf("Pais da carta 1: %s\n", pais1);
        printf("Pais da carta 2: %s\n", pais2);
        printf("Atributo 1 escolhido: %d\n", primeiroatributo);
        printf("Atributo 2 escolhido: %d\n", segundoatributo);
        printf("Soma dos resultados: %d\n", resultado1 + resultado2);
        printf("A carta 1 venceu!\n");
    } else if (resultado1 != resultado2){
        printf("Pais da carta 1: %s\n", pais1);
        printf("Pais da carta 2: %s\n", pais2);
        printf("Atributo 1 escolhido: %d\n", primeiroatributo);
        printf("Atributo 2 escolhido: %d\n", segundoatributo);
        printf("Soma dos resultados: %d\n", resultado1 + resultado2);
        printf("Empate!!\n");
    } else {
        printf("Pais da carta 1: %s\n", pais1);
        printf("Pais da carta 2: %s\n", pais2);
        printf("Atributo 1 escolhido: %d\n", primeiroatributo);
        printf("Atributo 2 escolhido: %d\n", segundoatributo);
        printf("Soma dos resultados: %d\n", resultado1 + resultado2);
        printf("A carta 2 ganhou!\n");
    }



    
    return 0;
}
}
