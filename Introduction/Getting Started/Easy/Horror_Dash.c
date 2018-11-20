#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int casos=0,i=0,j=0;
	long int num_estudiantes=0,dato=0;
	long int max=0;
	scanf("%d",&casos);
	for (i=0; i<casos; i++){
		scanf("%ld[^\t]",&num_estudiantes);
		for (j=0; j<(num_estudiantes-1); j++){
			scanf("%ld[^\t]",&dato);
			if (dato>max){
				max=dato;
			}
		}
		scanf("%ld",&dato);
		if (dato>max){
				max=dato;
			}
		printf("Case %d: %ld\n",(i+1),max);
		max=0;
	}
	return 0;
}