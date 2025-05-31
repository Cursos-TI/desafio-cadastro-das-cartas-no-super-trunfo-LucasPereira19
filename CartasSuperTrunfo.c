#include <stdio.h>;

int main(){
//Declarações das variaveis para primeira carta
    char estado1;
    char cod[4];
    char cidade1[20];
    int populacao;
    float pib1;
    float area1;
    int turisticos1;

//Declarações variaveis para segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float pib2;
    float area2;
    int turisticos2;

    //entrada da carta1
    printf("cadastro da carta1: \n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex:A01): ");
    scanf("%s", cod);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%d", &pib1);

    printf("Numero de pontos turisticos:");
    scanf("%d", &turisticos1);

    //entrada da carta 2
    printf("\n Cadastro da carta 2 \n");
    printf("Estado letra(A a H ): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex:B03) ");
    scanf("%s", codigo2);

    printf("Nome da cidade: " );
    scanf("%s", cidade2);

    printf("populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em Km): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos2);

    //Imprimindo a primeira cartas

    printf("\n carta 01 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod);
    printf("Nome da cidade: %s\n", cidade1);
    printf("populacao: %d\n", populacao);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);


    //Imprimindo a segunda carta

    printf("\n carta 02 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);
 
     return 0;
}









