#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
	int i=0,j=0,casos=0;
	int array[1000][1000];
	memset(array, 0, sizeof(int)*1000*1000);
	scanf("%d",&casos);
	for (i=0; i<casos; i++){
		for (j=0; j<2; j++){
			scanf("%d[^\t]",&array[i][j]);
		}
	}
	return 0;
}