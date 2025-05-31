#include <stdio.h>
 int main(){
//carta1
char estado1;//A
char codigo[4];//A04
char cidade[20];//Maceio
int populacao;//957.916
float area;//509.32km²
float pib;//27.484.016 bilhões
int pontosturisticos;//15

printf("Digite o estado: \n");
scanf("%c" , &estado1);

printf("Digite o codigo: \n");
scanf("%s" , &codigo);

printf("Digite a cidade: \n");
scanf("%s" , &cidade );

printf("Digite o numero de habitantes \n");
scanf("%d" , &populacao);

printf("Digite a area total: \n");
scanf("%f" , &area);

printf("Digite o pib: \n");
scanf("%f" , &pib);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d" , &pontosturisticos);
//imprimindo
printf("estado: %c\n", estado1);
printf("codigo: %s\n", codigo);
printf("cidade: %s\n",cidade);
printf("populacao: %d\n",populacao);
printf("area: %f\n", area);
printf("pib: %f\n", pib);
printf("pontosturisticos: %d\n", pontosturisticos);

 }