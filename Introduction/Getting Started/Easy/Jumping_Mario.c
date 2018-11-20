#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int casos=0,i=0,j=0,muros=0,saltos_grandes=0,saltos_chico=0;
	int *altura_muros;
	scanf("%d",&casos);
	for (i=0; i<casos; i++){
		scanf("%d",&muros);
		printf("Case %d: ",i+1);
		altura_muros=malloc(sizeof(int)*muros);
		for (j=0; j<(muros-1); j++){
			scanf("%d[^\t]",&altura_muros[j]);
		}
		scanf("%d",&altura_muros[j]);
		for (j=0; j<(muros-1); j++){
			if (altura_muros[j]<altura_muros[j+1]){
				saltos_grandes++;
			}
			else if(altura_muros[j]>altura_muros[j+1]){
				saltos_chico++;
			}
		}
		printf("%d %d\n",saltos_grandes,saltos_chico);
		saltos_chico=saltos_grandes=0;
	}
	return 0;
}