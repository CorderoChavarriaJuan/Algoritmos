#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int returNumber(char *t){
	int len=strlen(t),i=0,c1=0,c2=0,c3=0;
	char one[3]="one";
	char two[3]="two";
	char three[5]="three";
	if(len==3){
		for (i=0; i<len; i++){
			if(one[i]!=*(t+i)){
				c1++;
			}
			if(two[i]!=*(t+i)){
				c2++;
			}
		}
		if (c1<2&&c2>1){
			return 1;
		}
		else if (c2<2&&c1>1){
			return 2;
		}
		else{
			return -1;
		}
	}
	else if(len==5){
		for (i=0; i<len; i++){
			if (three[i]!=*(t+i)){
				c3++;
			}
		}
		if (c3<2){
			return 3;
		}
	}
	return 0;
}
int main(){
	int casos=0;
	char texto[10];
	int respuestas[10];
	int j=0,i=0;
	scanf("%d",&casos);
	for (i=0; i<casos; i++){
		scanf("%s",texto);
		respuestas[j++]=returNumber(texto);
	}
	for (i=0; i<j; i++){
		printf("%d\n",respuestas[i]);
	}
	return 0;
}
