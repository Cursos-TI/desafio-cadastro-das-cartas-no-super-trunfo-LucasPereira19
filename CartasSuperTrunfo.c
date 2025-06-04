#include <stdio.h>;

int main(){
//Declarações das variaveis para primeira carta
    char estado1; //Ex:A
    char cod[4]; //Ex:A04
    char cidade1[20]; //Ex:Maceio
    unsigned long int populacao;   //Ex:957.916
    float pib1 ;     //Ex:R$27,48 bilhões
    float area1;   //Ex:509,5km^2
    int turisticos1; //Ex:15
    float densidade_populacional; //Nova variavel.Ex: 957.916 / 509,5
    float pib_percapta; //Nova variavel. Ex: 27.484.016,31 / 957.916
//Declarações variaveis para segunda carta
    char estado2; //Ex:B
    char codigo2[4]; //Ex:B04
    char cidade2[20]; //Ex:Fortaleza
    unsigned long int populacao2;  //Ex:2.428.708
    float pib2;     //Ex:R$73,4 bilhões
    float area2;   //316,8km^2
    int turisticos2; //Ex:15
    float densidade_populacional2; //Nova variavel. Ex: 2.428.708 / 316,8
    float pib_percapta2; //Nova varialvel. Ex: 73.400.000,00 / 2.428.708
    //entrada da carta1
    printf("cadastro da carta1: \n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex:A01): ");
    scanf("%s", cod);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("populacao: ");
    scanf("%lu", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos1);

    densidade_populacional = (float)(populacao / area1);
    pib_percapta = (float)(pib1 / populacao);


    //entrada da carta 2
    printf("\n Cadastro da carta 2 \n");
    printf("Estado letra(A a H ): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex:B03) ");
    scanf("%s", codigo2);

    printf("Nome da cidade: " );
    scanf("%s", cidade2);

    printf("populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
        

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos2);
    
    densidade_populacional2 = (float)(populacao2 / area2);
    pib_percapta2 = (float)(pib2 / populacao2);
    //Imprimindo a primeira cartas

    printf("\n carta 01 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod);
    printf("Nome da cidade: %s\n", cidade1);
    printf("populacao: %lu\n", populacao);
    printf("Area km²: %.2f\n", area1);
    printf("PIB(bilhões): %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);
    printf("A densidade populacional é: %.2f\n", densidade_populacional);
    printf("O pib per capta é: %.2f\n", pib_percapta);


    //Imprimindo a segunda carta

    printf("\n carta 02 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("populacao: %lu\n", populacao2);
    printf("Area km²: %.2f\n", area2);
    printf("PIB(bilhões): %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);
    printf("A densidade populacional é: %.2f\n", densidade_populacional2);
    printf("O pib per capta é: %.2f\n", pib_percapta2);

    //Comparando as cartas

    float poder1 = (populacao + area1 + pib1 + turisticos1 + pib_percapta + densidade_populacional);
    float poder2 = (populacao2 + area2 + pib2 + turisticos2 + pib_percapta2 + densidade_populacional2);
    int resultado_populacao, resultado_area, resultado_pib, resultado_turistico, resultado_densidade, resultado_capital, resultado_poder;
    
    resultado_populacao = populacao > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_turistico = turisticos1 > turisticos2;
    resultado_densidade = densidade_populacional > densidade_populacional2;
    resultado_capital= pib_percapta > pib_percapta2;
    resultado_poder = poder1 > poder2;


    printf("\n\n");

    //Mostrando o vencedor
     printf("*** O grande vencedor é: carta %d ! *** \n", resultado_poder ? 1 : 2);
     printf("População: carta %d venceu (%d)\n", resultado_populacao ? 1 : 2, resultado_populacao);
     printf("Área: carta %d venceu (%d)\n", resultado_area ? 1 : 2, resultado_area);
     printf("PIB: carta %d venceu (%d)\n", resultado_pib? 1 : 2, resultado_area);
     printf("Pontos turisticos: carta %d venceu (%d)\n", resultado_turistico? 1 : 2, resultado_turistico);
     printf("Densidade Populacional: carta %d venceu (%d)\n", resultado_densidade? 1 : 2, resultado_densidade);
     printf("PIB per capta: carta %d venceu (%d)\n", resultado_capital? 1 : 2, resultado_capital);
     printf("Super poder:carta %d venceu (%d)\n", resultado_poder? 1 : 2, resultado_poder);

         return 0;
      }









