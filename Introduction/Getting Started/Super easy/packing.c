//UVA 12372 - Packing for Holiday
#include <stdio.h>
#include <stdlib.h>
int main(void){
	int casos=0, i=0, j=0;
	int valores[3];
	int **resultados;
	scanf("%d", &casos);
	resultados=(int**)malloc(sizeof(int*)*casos);
	for(i=0;i<casos;i++){
		*(resultados+i)=(int*)malloc(sizeof(int)*2);
		scanf("%d %d %d", &valores[0], &valores[1], &valores[2]);
		resultados[i][0]=i+1;
		if(valores[0] > 20 ||  valores[1] > 20 || valores[2] > 20){
			resultados[i][1]=0;
		}
		else
			resultados[i][1]=1;
	}
	for(i=0; i<casos; i++){
		for(j=0; j<2; j++){
			if(!j)
				printf("Case %d: ", resultados[i][j]);
			else
				printf("%s\n", (resultados[i][j]==1)?"good":"bad");
		}
	}
	return 0;
}