#include<stdio.h>
#include<stdlib.h>
void goose(void){
	int a=0,i=0,j=0,aux=0,k=0,l=0,cabezas,caballeros,*diametro,*alturas;
		scanf("%d %d[^\n]",&cabezas,&caballeros);
		if(cabezas == 0 && caballeros == 0){
			exit(0);
		}
		diametro = (int *)malloc(sizeof(int)*(cabezas+1));
		alturas = (int *)malloc(sizeof(int)*(caballeros+1));
		for(i=0;i<cabezas;i++){
			scanf("%d",(diametro+i));
		}
		for(i=0;i<caballeros;i++){
			scanf("%d",(alturas+i));
		}
		for(i=1;i<cabezas;i++){
			for(j=0;j<cabezas-i;j++){
				if(diametro[j]>diametro[j+1])
				{
			    	aux = diametro[j+1];
					diametro[j+1] = diametro[j];
					diametro[j] = aux;
				}
			}
		}
		for(i=1;i<caballeros;i++){
			for(j=0;j<caballeros-i;j++){
				if(alturas[j]>alturas[j+1])
				{
			    	aux = alturas[j+1];
					alturas[j+1] = alturas[j];
					alturas[j] = aux;
				}
			}
		}
		aux=0;
		if(cabezas>caballeros){
			printf("Loowater is doomed!\n");
		}else{
			for(i=0;i<cabezas;i++){
				for(j=l;j<caballeros;j++){
					if(diametro[i] <= alturas[j]){
						aux = aux + alturas[j];
						l=j+1;
						k++;
						//printf("caballero %d: %d\n",j+1,alturas[j]);
						break;
					}
				}
			}
			if(k == cabezas){
				printf("%d\n",aux);
			}else{
				printf("Loowater is doomed!\n");
			}
		}
	}
int main(void){
	
	
	while(1){
		goose();
	}
	return 0;
}