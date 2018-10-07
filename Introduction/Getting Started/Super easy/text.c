//UVA 272 - TEX Quotes
#include <stdio.h>
#include <string.h>
#define MAX 100000
int main(void){
	char texto[MAX];
	char espejo[MAX];
	int flag=0, i=0, j=0;
	scanf("%[^-1]", texto);
	for(i=0; i<strlen(texto); i++){
		if(texto[i]==34){
			if(flag==0){
				espejo[j]=96;
				espejo[j+1]=96;
				flag=1;
			}
			else if(flag == 1){
				espejo[j]=39;
				espejo[j+1]=39;
				flag=0;
			}
			j+=2;
		}
		else{
			espejo[j]=texto[i];
			j++;
		}
	}
	printf("%s",espejo);
	return 0;
}