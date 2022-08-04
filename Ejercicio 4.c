/*4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.*/

#include<stdio.h>

int main(){
	
	char palabra[19];
	int i = 0;
	int contador = 0; 
	
	
	printf("Ingrese una palabra: "); //EL usuario hace el ingreso de la palabra, la cual se guarda en el vector palabra.
	scanf("%s", palabra);
	
	do{
		
		if(palabra[i] == 'a') //Se compara el caracter que se encuentra en la posicion i con la letra a minuscula.
		{
		    contador++; 
		    
		    /*Si en la posicion i se guarda una a minuscula, la variable contador aumenta en uno su valor e 
            indica la cantidad de letras a minusculas encontradas*/
		}
		
		i++;
		
	} while(palabra[i] != '\0'); //El bucle se detiene cuando finaliza la palabra.
	
	
	
	printf("La palabra tiene %d a minusculas", contador); 
	
	return 0;
}
