#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int casos=0, max=0, min=100000;
	int res[3],respuestas[100],i=0,j=0,x=0,y=0,z=0;
	memset(respuestas, 0, sizeof(int)*100);
	scanf("%d",&casos);
	for (i=0; i<casos; i++){
		for (j=0; j<3; j++){
			scanf("%d[^\t]",&res[j]);
			if (res[j]>max){max=res[j];}
			if (res[j]<min){min=res[j];}
		}
		for (j=0; j<3; j++){
			if (res[j]!=max&&res[j]!=min){
				respuestas[x++]=res[j];
			}
			if (res[j]==max){
				y++;
				if (y>1){
					respuestas[x++]=res[j];
					y=0;
				}
			}
			else if (res[j]==min){
					z++;
					if (z>1){
						respuestas[x++]=res[j];
						z=0;
					}
				}
		}
		max=y=z=0;
		min=100000;
	}
	for (i=0; i<casos; i++){
		printf("Case %d: %d\n",i+1,respuestas[i]);
	}
	return 0;
}
