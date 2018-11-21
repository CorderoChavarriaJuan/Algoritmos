#include <stdio.h>
#include <string.h>
int main() {
  int Participantes=0,Presupuesto=0,Num_Hoteles=0,Semanas=0;
  int Camas_Disponibles=0,Precio_Persona=0,Precio_Total=0,Menor_Precio=0;
  int i=0,j=0;
  while(scanf("%d[^\t]",&Participantes)!=EOF){
    scanf("%d[^\t]",&Presupuesto);
    scanf("%d[^\t]",&Num_Hoteles);
    scanf("%d",&Semanas);
    for (i=0; i<Num_Hoteles; i++) {
      scanf("%d",&Precio_Persona);
      Precio_Total=Precio_Persona*Participantes;
      for(j=0; j<Semanas;j++){
        scanf("%d[^t]",&Camas_Disponibles);
        if(Camas_Disponibles>=Participantes&&Presupuesto>=Precio_Total){
          if(Menor_Precio>=Precio_Total||Menor_Precio==0){
            Menor_Precio=Precio_Total;
          }
        }
      }
    }
    if (Menor_Precio==0) {
      printf("stay home\n");
    }
    else{
      printf("%d\n",Menor_Precio);
    }
    Menor_Precio=0;
  }
  return 0;
}
