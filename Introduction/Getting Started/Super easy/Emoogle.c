#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=0,j=0,ocurrencia=0,valor=0,positive=0,negative=0;
	int *resultado=(int*)malloc(sizeof(int)*75);
	scanf("%d",&ocurrencia);
	while(ocurrencia!=0){
		for (i=0; i<ocurrencia; i++){
				scanf("%d[^\t]",&valor);
				if(valor>0){positive++;}
				else{negative++;}
			}
			resultado[j]=positive-negative;
			positive=negative=0;
			j++;
			scanf("%d",&ocurrencia);
	}
	for (i=0; i<j; i++){
		printf("Case %d: %d\n",i+1,resultado[i]);
	}
	return 0;
}