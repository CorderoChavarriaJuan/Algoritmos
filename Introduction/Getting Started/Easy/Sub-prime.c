#include <stdio.h>
int main(){
	int bancos[20],i=0,j=0,x=0,y=0;
	int operacion[2],bandera=0;
	char resultados[1000];
	int casos_banco=0, operaciones=0;
	scanf("%d[^\t]",&casos_banco);
	scanf("%d",&operaciones);
	printf("%d %d\n",casos_banco,operaciones);
	while(casos_banco!=0&&operaciones!=0){
		for(i=0; i<casos_banco; i++){
			scanf("%d[^\t]",&bancos[i]);
		}//Leemos reservas de cada banco
		for(j=0;j<operaciones;j++){ //Leemos las operaciones
			for(x=0;x<2;x++){
				scanf("%d[^\t]",&operacion[x]);//Leemos la linea de operación divido en 3 (Deudor Acreedor deuda)
				printf("Op %d\n",operacion[x]);
			}
			bancos[operacion[0]]=bancos[operacion[0]]-operacion[2];//operaciones correspondientes
			bancos[operacion[1]]=bancos[operacion[1]]+operacion[2];
		}
		/*for(j=0;j<casos_banco;j++){  //resvisar saldos
			if(bancos[j]<0&&bandera!=1){
				resultados[y++]='N';//Asignar salida
				bandera=1;
			}
			else if(j+1<casos_banco&&bancos[j+1]<0){
				resultados[y++]='S';//Asignar salida
			}
		}*/
		scanf("%d[\t]",&casos_banco); //Lee los bancos de la siguiente operación
		scanf("%d",&operaciones);  //Lee las siguientes operaciones
	}
	/*for (i=0; i<y; i++){
		printf("%c\n",resultados[i]);
	}*/
	return 0;
}
//Loansome Car Buyer
//Event Planning
//Horror Dash