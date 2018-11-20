#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define POSITIVE_RESULT '+'
#define NEGATIVE_RESULT '-'
#define FAILED_EXPERIMENT '*'
#define NOT_COMPLETED_EXPERIMENT '?'
int main(){
	int casos=0,i=0,j=0,len=0;
	char *resultados;
	char cifrado[2000];
	scanf("%d",&casos);
	resultados = malloc(sizeof(char)*casos);
	for (i=0; i<casos; i++){
		scanf("%s",cifrado);
		len=strlen(cifrado);
		if (strcmp(cifrado,"1")==0||strcmp(cifrado,"4")==0||strcmp(cifrado,"78")==0){
			resultados[j++]=POSITIVE_RESULT;
		}
		else if(cifrado[len-1]=='5'&&cifrado[len-2]=='3'){
			resultados[j++]=NEGATIVE_RESULT;	
		}
		else if(cifrado[0]=='9'&&cifrado[len-1]=='4'){
			resultados[j++]=FAILED_EXPERIMENT;
		}
		else if(cifrado[0]=='1'&&cifrado[1]=='9'&&cifrado[2]=='0'){
			resultados[j++]=NOT_COMPLETED_EXPERIMENT;
		}
		else{
			resultados[j++]=POSITIVE_RESULT;
		}
	}
	for (i=0; i<j; i++){
		printf("%c\n",resultados[i]);
	}
	return 0;
}