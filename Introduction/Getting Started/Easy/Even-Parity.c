#include <stdio.h>
#include <stdlib.h>
int main(){
  int casos=0,tamanio=0,operaciones=0,i=0,j=0,x=0;
  int **matriz;
  scanf("%d",&casos);
  for (i=0; i<casos; i++) {
    scanf("%d",&tamanio);
    matriz=(int **)malloc(tamanio*sizeof(int*));
    for (j=0; j<tamanio; j++) {
      matriz[j]=(int*)malloc(tamanio*sizeof(int));
      for (x=0; x<tamanio-1; x++) {
        scanf("%d[^t]",&matriz[j][x]);
      }
      scanf("%d",&matriz[j][x]);
    }
    //Realizar calculo de operaciones minimas
    printf("Case %d: %d\n",i,operaciones);
  }
  return 0;
}
