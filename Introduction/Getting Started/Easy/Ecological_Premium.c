//Resuelto
#include <stdio.h>
#include <stdlib.h>
int main(){
	int casos=0,x=0,agricultores=0,j=0,i=0;
	long double calculos=0;
	long int *respuestas;
	long double datos[3];
	scanf("%d",&casos);
	respuestas=malloc(sizeof(long int)*casos);
	for(x=0; x<casos; x++){
		scanf("%d",&agricultores);
		for(i=0; i<agricultores; i++){
			scanf("%Lf[^\t]",&datos[0]);
			scanf("%Lf[^\t]",&datos[1]);
			scanf("%Lf",&datos[2]);
			calculos=calculos+((datos[0]/datos[1])*datos[1]*datos[2]);
		}
		respuestas[j++]=calculos;
		calculos=0;
	}
	for (i=0; i<j; i++){
		printf("%ld\n",respuestas[i]);
	}
	return 0;
}
