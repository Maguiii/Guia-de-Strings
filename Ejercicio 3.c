/* 3) El usuario ingresa dos strings. 
Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones. */

#include<stdio.h>

int main(){
		
	char palabra1[19];  //Se declaran los vectores donde se guardarán los strings.
	char palabra2[19];
	int i = 0;
	int j = 0;
	int iguales1 = 0;
	int iguales2 = 0;
	int contador1 = 0;
	int contador2 = 0;
	
	printf("Ingrese la primer palabra: "); //Se pide al usuario el ingreso de los strings.
	scanf("%s", palabra1);
	
	printf("Ingrese la segunda palabra: ");
	scanf("%s", palabra2);
	
	while(palabra1[i] != '\0'){ //Los strings se comparan hasta que finaliza el primer string.
		
		if(palabra1[i] == palabra2[i]){ //Si las posiciones comparadas son iguales la variable iguales1 lo marca aumentando en uno.
			iguales1++;
		}
		i++;
		contador1++; //Tambien aumenta en uno la varibales contador que es utlizada para saber cuantos caracteres tiene el pimer string
	}
	
	while(palabra2[j] != '\0'){   //El proceso se repite pero esta vez finaliza cuando lo hace el segundo string.
		
		if(palabra1[j] == palabra2[j]){ //Se comparan las posiciones y se indica en otra variable si es que son iguales o no.
			iguales2++;
		}
		j++;
		contador2++;
	}
	
	/*Para que los strings sean iguales, deben tener la misma cantidad de caracteres (para eso es la comparacion de los contadores 1 y 2)
	Tambien deben ser iguales la cantidad de caracteres iguales (iguales1) con la cantidad de caracteres existentes en ambos strings (contador2)*/
	
	if(contador1 == contador2 && iguales1 == contador2){ 
		printf("Los strings ingresados son iguales");
	}
	else{
		printf("Los strings ingresados no son iguales"); //Si estas condiciones no se cumplen, es porque los strings no son iguales.
	}
	
	return 0;
}
