#include <stdio.h>

int main() {

char estado[100], estado2[100];
char codigoCarta[100], codigoCarta2[100];
char nomeCidade[100], nomeCidade2[100];
int populacao, populacao2;
float area, area2;
float pib, pib2; 
int numeroPontosTuristicos, numeroPontosTuristicos2;
float densidadePopulacional, densidadePopulacional2; 
float pibPerCapita, pibPerCapita2;
float superPoder, superPoder2;
char resultado, resultado2;

 	printf("digite o estado da primeira carta: ");
    scanf("%99s", estado);

    printf("digite o Codigo da Carta da primeira carta: ");
    scanf("%99s", codigoCarta);

    printf("digite o nome da cidade da primeira carta: ");
    scanf("%99s", nomeCidade);

    printf("digite o numero da populacao da primeira carta: ");
    scanf("%d", &populacao);

    printf("digite o numero da area (em km quadrado) da primeira carta: ");
    scanf("%f", &area);

    printf("digite o numero do PIB da primeira carta: ");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &numeroPontosTuristicos);

    printf("digite o estado da segunda carta: ");
    scanf("%99s", estado2);

    printf("digite o Codigo da Carta da segunda carta: ");
    scanf("%99s", codigoCarta2);

    printf("digite o nome da cidade da segunda carta: ");
    scanf("%99s", nomeCidade2);

    printf("digite o numero da populacao da segunda carta: ");
    scanf("%d", &populacao2);

    printf("digite o numero da area (em km quadrados) da segunda carta: ");
    scanf("%f", &area2);

    printf("digite o numero do PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &numeroPontosTuristicos2);

	densidadePopulacional = populacao/area;
	densidadePopulacional2 = populacao2/area2;
	pibPerCapita = pib/populacao;
	pibPerCapita2 = pib2/populacao2;
	superPoder = ((float)populacao+area+pib+(float)numeroPontosTuristicos+pibPerCapita)/densidadePopulacional;
	superPoder2 = ((float)populacao2+area2+pib2+(float)numeroPontosTuristicos2+pibPerCapita2)/densidadePopulacional2;
	
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km^2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulacional);
    printf("PIB Per Capita: R$ %.2f\n",pibPerCapita);
    printf("Super Poder: %.2f\n", superPoder);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulacional2);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita2);
	printf("Super Poder: %.2f\n", superPoder2);

	printf("\nComparacao das Cartas: (atributo: populacao)\n");
    printf("Populacao: %d\n", populacao > populacao2);
	printf("carta 1 - %s (%s) : %d\n" , nomeCidade, estado, populacao);
	printf("carta 2 - %s (%s) : %d\n" , nomeCidade2, estado2, populacao2);
	
	if (populacao > populacao2){
		printf(" Resultado: Carta1 ( %s ) venceu\n", nomeCidade);
	}
	else{
		printf(" Resultado: Carta2 ( %s ) venceu\n", nomeCidade2);
	}
    return 0;
}
