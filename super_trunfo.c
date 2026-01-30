#include <stdio.h>

int main() {

char pais[100], pais2[100];
int populacao, populacao2;
float area, area2;
float pib, pib2; 
int numeroPontosTuristicos, numeroPontosTuristicos2;
float densidadeDemografica, densidadeDemografica2; 
int opcoes;
int resultado;

	printf("digite o pais da primeira carta: ");
    scanf("%99s", pais);

    printf("digite o numero da populacao da primeira carta: ");
    scanf("%d", &populacao);

    printf("digite o numero da area (em km quadrado) da primeira carta: ");
    scanf("%f", &area);

    printf("digite o numero do PIB da primeira carta: ");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &numeroPontosTuristicos);

	printf("digite o pais da segunda carta: ");
    scanf("%99s", pais2);
    
    printf("digite o numero da populacao da segunda carta: ");
    scanf("%d", &populacao2);

    printf("digite o numero da area (em km quadrados) da segunda carta: ");
    scanf("%f", &area2);

    printf("digite o numero do PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &numeroPontosTuristicos2);

	densidadeDemografica = populacao/area;
	densidadeDemografica2 = populacao2/area2;
	
	printf("\n MENU DE OPCOES\n");
	printf("1. populacao\n");
	printf("2. area\n");
	printf("3. PIB\n");
	printf("4. numero de pontos turisticos\n");
	printf("5. densidade demografica\n");
	
	printf("digite o numero da opcao desejada\n");
	scanf("%d", &opcoes);
	
	switch (opcoes){
		case 1:
			printf("voce escolheu a opcao 1\n");
			if (populacao > populacao2) {
			resultado = populacao > populacao2;
			} else if( populacao == populacao2){
				resultado = 2;
			} else{
				resultado = populacao > populacao2;
			}
			break;
			case 2:
			printf("voce escolheu a opcao 2\n");
			if (area > area2) {
			resultado = area > area2;
			} else if( area == area2){
				resultado = 2;
			} else{
				resultado = area > area2;
			}
			break;
			case 3:
			printf("voce escolheu a opcao 3\n");
			if (pib >pib2) {
			resultado = pib > pib2;
			} else if( pib == pib2){
				resultado = 2;
			} else{
				resultado = pib > pib2;
			}
			break;
			case 4:
			printf("voce escolheu a opcao 4\n");
			if (numeroPontosTuristicos > numeroPontosTuristicos2 ){
			resultado = numeroPontosTuristicos > numeroPontosTuristicos2;
			} else if( numeroPontosTuristicos == numeroPontosTuristicos2){
				resultado = 2;
			} else{
				resultado = numeroPontosTuristicos > numeroPontosTuristicos2;
			}
			break;
			case 5:
			printf("voce escolheu a opcao 5\n");
			if ( densidadeDemografica > densidadeDemografica2) {
			resultado = densidadeDemografica < densidadeDemografica2;
			} else if( densidadeDemografica == densidadeDemografica2){
				resultado = 2;
			} else{
				resultado = densidadeDemografica < densidadeDemografica2;
			}
			break;
			default:
				printf(" opcoes do menu invalida\n");
				break;
	}
	
    printf("\nCarta 1:\n");
    printf("Pais: %s\n", pais);
    printf("\nCarta 2:\n");
    printf("Pais: %s\n", pais2);
    if (opcoes == 1 ){
   	printf("\natributo escolhido : Populacao\n");
   	printf ("valor da carta 1: %d, valor da carta 2%d\n", populacao, populacao2);
   	} else if (opcoes == 2){
		printf("\natributo escolhido : Area\n");
		printf ("valor da carta 1: %.2f, valor da carta 2 %.2f\n", area, area2);
	} else if (opcoes ==3){
		printf("\natributo escolhido : PIB\n");
		printf ("valor da carta 1: %.2f, valor da carta 2 %.2f\n", pib, pib2);
	} else if (opcoes ==4){
		printf("\natributo escolhido : Numero de Pontos Turisticos\n");
		printf ("valor da carta 1: %d, valor da carta 2 %d \n", numeroPontosTuristicos, numeroPontosTuristicos2);
	} else if (opcoes ==5){
		printf("\natributo escolhido : densidadeDemografica\n");
		printf ("valor da carta 1: %.2f, valor da carta 2 %.2f\n", densidadeDemografica, densidadeDemografica2);
	} else if(opcoes != 1 && opcoes!= 2 && opcoes!= 3 && opcoes!= 4 && opcoes!= 5){
		resultado = 3;
	}
	if (resultado == 1 ){
		printf(" Resultado: Carta1 venceu\n");
	}
	 else if (resultado == 0){
		printf(" Resultado: Carta2 venceu\n");
	} else if (resultado == 2){
		
		printf(" Empatou!\n");
	}else if(resultado ==3){
		printf ("comparacao invalida");
	}
	
    return 0;
}
