#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ORDENADO "Ordered"
#define DESORDENADO "Unordered"
int main(){
	int casos=0,i=0,j=0,mayor=0,menor=0,desor=0;
	int tam_troncos[10];
	char *respuestas;
	scanf("%d",&casos);
	printf("Lumberjacks:\n");
	for (i=0; i<casos; i++){
		for (j=0; j<9; j++){
			scanf("%d[^\t]",&tam_troncos[j]);
		}
		scanf("%d",&tam_troncos[j]);
		for (j=0; j<9; j++){
			if (tam_troncos[j]>tam_troncos[j+1]){
				mayor++;
			}
			else if(tam_troncos[j<tam_troncos[j+1]]){
				menor++;
			}
			else{
				desor++;
			}
		}
		if (mayor==9){
			printf("%s\n",ORDENADO);
		}
		else if(menor==9){
			printf("%s\n",ORDENADO);
		}
		else{
			printf("%s\n",DESORDENADO);
		}
		mayor=menor=desor=0;
	}
	return 0;
}