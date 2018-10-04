#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int cuenta=0, operaciones=0, i=0,j=0,x=0;
	int reporte[100];
	char c;
	char *ptr;
	char operacion[400];
	scanf("%d",&operaciones);
	while ((c = getchar())!='\n'&&c!=EOF);
	for (i=0; i<operaciones; i++){
		fgets(operacion,400,stdin);
		ptr=strtok(operacion," ");
		if(strcmp(ptr,"donate")==0){
			ptr=strtok(NULL," ");
			cuenta=cuenta+atoi(ptr);
		}
		ptr=strtok(operacion,"\n");
		if(strcmp(ptr,"report")==0){
			reporte[x++]=cuenta;
		}
	}
	for (j=0; j<x; j++){
		printf("%d\n",reporte[j]);
	}
	return 0;
}