/* 2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC". */

#include <stdio.h>

int main(){
	
	char palabra[19]; //Se declaran el vector palabra que puede almacenar hasta 20 letras.
	int contador = 0;
	int i = 0;
	
	printf("Ingrese una palabra: "); //Se le pide el ingreso de datos al usuario 
	scanf("%s", palabra);  //La palabra ingresada se guarda en el vector palabra.
	
	while(palabra[i++] != '\0'){ //Se cuenta la cantidad de caracteres que tiene la palabra ingresada
	contador++;             
	}
	
	while(contador>=0){
	printf("%c", palabra[contador--]); //Se imprime la palabra empezando desde la ultima posicion que la palabra ocupa en el vector.
	}
	
	return 0;
}
