#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define RESP1 "Hajj-e-Akbar"
#define RESP2 "Hajj-e-Asghar"
int main(){
	char entrada[100];
	int respuestas[1000],i=0,j=0;
	char *ptr;
	memset(respuestas, -1,1000);
	fgets(entrada,100,stdin);
	ptr=strtok(entrada,"\n");
	while(strcmp(ptr,"*")!=0){
		if (strcmp(entrada,"Hajj")==0){
			respuestas[j++]=1;
		}
		if (strcmp(entrada,"Umrah")==0){
			respuestas[j++]=2;
		}
		fgets(entrada,100,stdin);
		ptr=strtok(entrada,"\n");
	}
	for (i=0; i<j; i++){
		if (respuestas[i]==1){
			printf("Case %d: %s\n",i+1,RESP1);
		}
		if (respuestas[i]==2){
			printf("Case %d: %s\n",i+1,RESP2);
		}
	}
	return 0;
}