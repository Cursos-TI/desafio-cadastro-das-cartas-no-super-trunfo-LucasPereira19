#include <stdio.h>;

int main(){
//Declarações das variaveis para primeira carta
    char estado1; //Ex:A
    char cod[4]; //Ex:A04
    char cidade1[20]; //Ex:Maceio
    int populacao;   //Ex:957.916
    float pib1;     //Ex:R$27,48 bilhões
    float area1;   //Ex:509,5km^2
    int turisticos1; //Ex:15

//Declarações variaveis para segunda carta
    char estado2; //Ex:B
    char codigo2[4]; //Ex:B04
    char cidade2[20]; //Ex:Fortaleza
    int populacao2;  //Ex:2.428.708
    float pib2;     //Ex:R$73,4 bilhões
    float area2;   //316,8km^2
    int turisticos2; //Ex:15

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

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
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

    printf("Area (em km²): ");
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
    printf("Area km²: %.2f\n", area1);
    printf("PIB(bilhões): %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);


    //Imprimindo a segunda carta

    printf("\n carta 02 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("Area km²: %.2f\n", area2);
    printf("PIB(bilhões): %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);
 
     return 0;
}









