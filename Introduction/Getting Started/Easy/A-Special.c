#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int invitados=0,i=0,todos_cantaron=0,j=0,ctr_cancion=0;
  char **nombres_invitados;
  char cancion[16][100];
  strcpy(cancion[0],"Happy");
  strcpy(cancion[1],"birthday");
  strcpy(cancion[2],"to");
  strcpy(cancion[3],"you");
  strcpy(cancion[4],"Happy");
  strcpy(cancion[5],"birthday");
  strcpy(cancion[6],"to");
  strcpy(cancion[7],"you");
  strcpy(cancion[8],"Happy");
  strcpy(cancion[9],"birthday");
  strcpy(cancion[10],"to");
  strcpy(cancion[11],"Rujia");
  strcpy(cancion[12],"Happy");
  strcpy(cancion[13],"birthday");
  strcpy(cancion[14],"to");
  strcpy(cancion[15],"you");
  scanf("%d",&invitados);
  nombres_invitados=(char **)malloc(invitados*sizeof(char*));
  for (i=0; i<invitados; i++) {
    nombres_invitados[i]=(char *)malloc(100*sizeof(char));
    scanf("%s",nombres_invitados[i]);
  }
  while (j<invitados&&ctr_cancion!=16) {
    printf("%s: %s\n",nombres_invitados[j],cancion[ctr_cancion]);
    j++;
    ctr_cancion++;
    if (j<invitados&&ctr_cancion==16&&todos_cantaron==0) {
      ctr_cancion=0;
    }
    else if(j==invitados&&ctr_cancion<16){
      j=0;
      todos_cantaron=1;
    }
  }
  return 0;
}
