#include<stdio.h>
#include <string.h>
#define SUCCESS "success on day"
#define FAILURE "failure on day"
int main(){
	int res[10000][2],i=0,j=0,z=0;
	double lectura[4];
	double distancia_pr=0.0,distancia_r=0.0;
	double factor_f=0.0;
	int dias=0;
	scanf("%lf[^\t]",&lectura[i++]);
	scanf("%lf[^\t]",&lectura[i++]);
	scanf("%lf[^\t]",&lectura[i++]);
	scanf("%lf",&lectura[i++]);
	while(lectura[0]!=0){
		/*
		factor_f=(lectura[3]/100)*lectura[1];
		while(distancia_r>=0.0&&distancia_r<=lectura[0]){
			distancia_r=distancia_r+lectura[1];
			if(distancia_r<=lectura[0]){
				distancia_r=distancia_r-lectura[2];
			}
			if(lectura[1]-factor_f>0){
				lectura[1]=lectura[1]-factor_f;
			}
			dias++;
		}
		if (distancia_r>=lectura[0]){
			res[j][0]=1;
			res[j][1]=dias;
		}
		else{
			res[j][0]=0;
			res[j][1]=dias;
		}
		j++;
		i=0;
		dias=0;
		distancia_r=0; IMPLEMENTAR DyV*/
		scanf("%lf[^\t]",&lectura[i++]);
		scanf("%lf[^\t]",&lectura[i++]);
		scanf("%lf[^\t]",&lectura[i++]);
		scanf("%lf",&lectura[i++]);
	}
	for (i=0; i<j; i++){
		if (res[i][0]==1){
			printf("%s %d\n",SUCCESS,res[i][1]);
		}
		else{
			printf("%s %d\n",FAILURE,res[i][1]);
		}
	}
	return 0;
}
//A2OJ Hacer una cuenta 
//Enviar a rsaucedo@ipn.mx