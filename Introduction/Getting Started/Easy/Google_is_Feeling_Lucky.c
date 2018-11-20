#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
	char *URL;
	int valor;
}URL_Valor;
int main(){
	int casos=0,x=0,i=0,j=0,max=0;
	char *lectura_URL;
	URL_Valor opciones[10];
	lectura_URL=malloc(sizeof(char)*10000);
	scanf("%d",&casos);
	for (i=0; i<casos; i++){
		printf("Case #%d:\n",i+1);
		for (j=0; j<10; j++){
			opciones[j].URL=malloc(sizeof(char)*strlen(lectura_URL));
			scanf("%s",opciones[j].URL);
			scanf("%d",&opciones[j].valor);
			if (opciones[j].valor>max){
				max=opciones[j].valor;
			}
		}
		for (j=0; j<10; j++){
			if (opciones[j].valor==max){
				printf("%s\n",opciones[j].URL);
			}
		}
		max=0;
	}
	return 0;
}