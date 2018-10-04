#include <stdio.h>
#include <stdlib.h>
int main(){
	int t=0,resultado=0,i=0;
	int *casos=malloc(sizeof(int)*100);
	scanf("%d",&t);
	for (i=0; i<t; i++){
		scanf("%d",&casos[i]);
	}
	for (i=0; i<t; i++){
		resultado=(((((casos[i]*567)/9)+7492)*235)/47)-498;
		if ((resultado=(resultado/10)%10)<0){
			resultado=(-1)*(resultado);
		}
		printf("%d\n",resultado);
	}
	return 0;
}