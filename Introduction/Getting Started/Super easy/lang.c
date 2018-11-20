#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 28000

const char* setLang(char *cadena){
	if(!strncmp(cadena, "HELLO", 5))
		return "ENGLISH";
	else if(!strncmp(cadena, "HOLA", 4))
		return "SPANISH";
	else if(!strncmp(cadena, "HALLO", 5))
		return "GERMAN";
	else if(!strncmp(cadena, "BONJOUR", 7))
		return "FRENCH";
	else if(!strncmp(cadena, "CIAO", 4))
		return "ITALIAN";
	else if(!strncmp(cadena, "ZDRAVSTVUJTE", 12))
		return "RUSSIAN";
	else
		return "UNKNOWN";
}

int main(void){
	unsigned int caso = 0, i = 0, j = 0;
	char *texto=NULL, *saludo=NULL;
	texto=(char*)malloc(MAX);
	saludo=(char*)malloc(14);
	scanf("%[^35]", texto);
	for(i=0; *(texto+i)!=35; i++){
		*(saludo+j)=*(texto+i);
		if(*(texto+i)==10){
			caso++;
			*(saludo+j)=0;
			printf("Case %d: %s\n", caso, setLang(saludo));
			j=0;
		}
		else
			j++;
		
	}

	return 0;
}
