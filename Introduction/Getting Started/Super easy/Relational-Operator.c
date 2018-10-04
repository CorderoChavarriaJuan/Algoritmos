#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int casos=0,i=0,j=0,x=0;
	int entrada[2];
	char respuestas[15];
	scanf("%d",&casos);
	for (i=0; i<casos; i++){
		for (j=0; j<2; j++){
			scanf("%d[^\t]",&entrada[j]);
		}
		if (entrada[0]<entrada[1]){
			respuestas[x++]='<';
		}
		else if(entrada[0]>entrada[1]){
			respuestas[x++]='>';
		}
		else if(entrada[0]==entrada[1]){
			respuestas[x++]='=';
		}
	}
	for (i=0; i<casos; i++){
		printf("%c\n",respuestas[i]);
	}
	return 0;
}