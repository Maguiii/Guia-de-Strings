/* 7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las edades. */

#include <stdio.h>
#include <string.h>

int main(){
	
	char nombre[19];  //Se declara el vector donde se guardara el nombre ingresado.
	char nombre_joven[19]; //Se declara el vector que contendra el nombre de la persona mas joven.
	int i = 0;
	int edad; 
	int menor = 200; //Esta variable se utilizara para compar con las edades ingresadas. 
                    //Se inicia en un numero elevado para que sea remplazado por la primera edad ingresada.
	
	for(i=0; i<=4; i++) //El ingreso de datos se hace para 5 personas.
	{
		printf("Ingrese el nombre: ");
		scanf("%s", nombre);
		
		printf("Ingrese la edad: ");
		scanf("%d", &edad);
		
		if(edad < menor){     //Se compara la edad de la ultima persona ingresada, con la menor ingresada hasta el momento.
			menor = edad;    //Si la edad ingresada es menor, esta ocupa el lugar de la variable menor para ser comparada con los proximos ingresos.
			strcpy(nombre_joven, nombre); //Se copia el nombre de la persona ingresada en la variable que almacena el nombre de la persona mas joven.
		}
	}
	printf("La persona mas joven es: %s", nombre_joven);
	
	return 0;
} 
