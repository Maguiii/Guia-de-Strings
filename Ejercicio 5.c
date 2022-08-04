/* 5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene. */

#include<stdio.h>

int main(){
	
	char palabra[19];
	int i = 0;
	int minusculas = 0; //Se declaran las variables que contendran la cantidad de vocales minusculas y mayusculas encontradas.
	int mayusculas = 0;
	
	
	printf("Ingrese una palabra: "); //Se realiza el ingreso de la palabra y se guarda en el vector anteriormente declarado.
	scanf("%s", palabra);
	
	do{
		/*Se compran todas las posiciones del vector palabra que estan ocupados con las vocales en minuscula y en mayuscula
		  Se utiliza el operador || correspondiente a la funcion or, 
		  ya que no se hace distincion en cuanto a que vocales son las que contiene la palabra*/
	
		if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
		{
			minusculas++; //Al encontrar una coincidencia, la variable aumenta su valor en uno.
		}
		
		if(palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U')
		{
			mayusculas++; //Al encontrar una coincidencia, la variable aumenta su valor en uno.
		}
		
		i++;
    }
	while(palabra[i] != '\0');
	
	printf("La palabra tiene %d volcales minusculas, y %d vocales mayusculas.", minusculas, mayusculas);
	
	return 0;
}
