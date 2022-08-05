/* 9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B. */

#include<stdio.h>
#include <string.h>

int main(){
	
	char palabra[9]; 
	char encriptado[9];
	int i = 0;
	
	printf("Ingrese la palabra que se quiere encriptar: "); //Se hace el ingreso de la palabra que se desea encriptar.
	scanf("%s", palabra);
	
	while(palabra[i] != '\0') //El bucle se repite hasta que finaliza la palabra.
	{
		encriptado[i] = palabra[i]+3; 
		
		/*Para realizar el encriptado, se copia posicion a posicion la tercer letra consecutiva a cada caracter de la palabra ingresada
		en el vector encriptado, para ello se suma un 3 a la posicion de la tabla ascci que ocupa el caracter de la palabra original*/
		
		if(palabra[i] == 'x'){    //Se hace una excepcion para las ultimas letras del abecedario, para que sean remplazadas con las primeras
			encriptado[i] = 'a'; //letras del abecedario, y no con los simbolos siguientes al abecedario en el codigo ascci.
		}
		if(palabra[i] == 'y'){
			encriptado[i] = 'b';
		}
		if(palabra[i] == 'z'){
			encriptado[i] = 'c';
		}
		if(palabra[i] == 'X'){   //Se hace estas excepcion tanto para minusculas como para mayusculas.
			encriptado[i] = 'A'; 
		}
		if(palabra[i] == 'Y'){
			encriptado[i] = 'B';
		}
		if(palabra[i] == 'Z'){
			encriptado[i] = 'C';
		}
		i++;
	}
	
	printf("La palabra encriptada es: %s\n", encriptado); //Se imprime el resultado final del encriptado.

	return 0;
}
