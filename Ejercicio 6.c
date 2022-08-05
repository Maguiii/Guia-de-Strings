/* 6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. 
Para simplificar el problema, trabaje solo con mayúsculas. */

#include<stdio.h>

int main(){
	
	int palabra[19];
	int i = 0;
	int j = 0;
	int temporal = 0;
	int maximo = 0;
	
	printf("Ingrese una palabra: ");
	scanf("%d", &palabra);
	
	
	for(i=65; i>=90; i++){
		
		for(j=0; j>=19; j++)
		{ 
			if(palabra[j] == i)
			{
				temporal++;
				printf("%d", temporal);
			}
		}
		
		if(temporal > maximo){
			maximo = i;
		}
		if(temporal == maximo){
			printf("\nMas de una letra aparece la misma cantidad de veces\n");
		}
	}
	
	printf("La letra que mas se repite es: %c", maximo);
	
	return 0;
}
	
	
