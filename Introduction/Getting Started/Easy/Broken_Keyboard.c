#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct _nodo {
   char *valor;
   struct _nodo *siguiente;
} tipoNodo;
typedef tipoNodo *pNodo;
typedef tipoNodo *Pila;
void Push(Pila *l, char *v);
char* Pop(Pila *l);
//DEFINICION DE PILA
int main(){	
	Pila pilaI = NULL;
	Pila pilaF = NULL;
	Pila pilaR = NULL;
	pNodo p;
	int i=0,tam=0;
	char *datos;
	while(scanf("%s",datos)!=EOF){
		tam=strlen(datos);
		for (i=0; i<tam; i++){
			if(datos[i]=='['){
			}
		Push(&pila,datos)
		}
	}
	for (i=0; i<; i){
	}
	return 0;
}
char cortar(int i, int j,char *cadena){
	int tam = j-i;
	char *res = malloc(sizeof(char)*tam);
	for(j=0; j<tam; j++){
		res[j]=cadena[i+j];
	}
	return *res;
}
 void Push(Pila *pila, char *v){
 	pNodo nuevo;
   /* Crear un nodo nuevo */
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = malloc(sizeof(char)*strlen(v));
   strcpy(nuevo->valor,v);
   
   /* Añadimos la pila a continuación del nuevo nodo */
   nuevo->siguiente = *pila;
   /* Ahora, el comienzo de nuestra pila es en nuevo nodo */
   *pila = nuevo;
}

char* Pop(Pila *pila){
   pNodo nodo; /* variable auxiliar para manipular nodo */
   char *v;      /* variable auxiliar para retorno */
   /* Nodo apunta al primer elemento de la pila */
   nodo = *pila;
   if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   /* Asignamos a pila toda la pila menos el primer elemento */
   *pila = nodo->siguiente;
   /* Guardamos el valor de retorno */
   v = malloc(sizeof(char)*strlen(nodo->valor));
   strcpy(v,nodo->valor);
   /* Borrar el nodo */
   free(nodo);
   return v;
}
