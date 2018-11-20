#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SOLVENTE 'S'
#define NO_SOLVENTE 'N'
int main(){
	int *bancos_reservas;
	int operaciones=0,num_bancos=0,i=0,j=0,deudor=0,acreedor=0,deuda=0;
	char *respuestas;
	respuestas=malloc(sizeof(char)*1000);
	scanf("%d[^\t]",&num_bancos);
	scanf("%d",&operaciones);
	while(num_bancos!=0&&operaciones!=0){
		bancos_reservas=malloc(sizeof(int)*num_bancos);
		for (i=0; i<(num_bancos-1); i++){
			scanf("%d[^\t]",&bancos_reservas[i]);
		}
		scanf("%d",&bancos_reservas[i]);
		for (i=0; i<operaciones; i++){
			scanf("%d[^\t]",&deudor);
			scanf("%d[^\t]",&acreedor);
			scanf("%d",&deuda);
			bancos_reservas[(deudor-1)]-=deuda;
			bancos_reservas[(acreedor-1)]+=deuda;
		}
		for (i=0; i<num_bancos; i++){
			if (bancos_reservas[i]<0){
				respuestas[j++]=NO_SOLVENTE;
				break;
			}
			else if((i+1)==num_bancos){
				respuestas[j++]=SOLVENTE;
			}
		}
		scanf("%d[^\t]",&num_bancos);
		scanf("%d",&operaciones);
		free(bancos_reservas);
	}
	for (i=0; i<j; i++){
		printf("%c\n",respuestas[i]);
	}
	return 0;
}
//Loansome Car Buyer
//Event Planning
//Horror Dash
