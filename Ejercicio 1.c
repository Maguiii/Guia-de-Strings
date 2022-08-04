/* 1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.*/

#include <stdio.h>

int main(){
	
	char palabra[19]; //Se declaran el vector palabra que puede almacenar hasta 20 letras.
	int i = 0;
	int contador = 0;
	
	
	printf("Ingrese una palabra: "); //Se le pide el ingreso de datos al usuario, luego se guarda en el vector palabra.
	scanf("%s", palabra);
	
	do{
	    contador++;     //Se utiliza una variable como contador para contar cuantas caracteres tiene la palabra.
	}
	while(palabra[i++] != '\0'); 
	
	/* Se finaliza el conteo cuando la posicion del vector esta ocupada con \0, 
	ya que esto indica que alli finaliza la palabra.*/
	
	printf("\nLa palabra ingresada tiene %d letras", contador-1); 
	
	/*Al utilizar la funcion do-while, el contador tambien suma un valor cuando se trata de la posicion donde esta \0,
	por eso al imprimir la variable contador se le resta 1 */

	return 0;
}

