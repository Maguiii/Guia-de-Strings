/* 8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados. */

#include <stdio.h>
#include <string.h>
 
int main() {
    
  char nombre[15]; //Se declara la variable donde se guardara el nombre ingresado.
  char primero[15];
  char mensaje[15]={'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'D', 'O'}; //Se declara un mensaje para mostrar en el caso de que se finalize el ingreso sin haber 
  int aux=0;                                                          
                                                             
  printf("Ingrese FIN para detener el ingreso.\n\n");
 
  do {                            //El proceso se detiene cuando la palabra ingresada es FIN.
    printf("Ingrese un nombre: ");  
    scanf("%s",nombre);
    
    
    if(aux == 0)
    { 
		if(strcmp(nombre,"FIN") == 0)  //Si el primer ingreso es la palabra FIN, se copia el mensaje preestablecido en la variable primero.
		{
		    strcpy(primero, mensaje); 
		}
		else
		{
		 	strcpy(primero, nombre); //Si se trata del primer ingreso distinto a FIN, la variable primero va a ser el primer nombre ingresado, salteandose la comparacion entre dos strings.
	    }
 	}
 	
	else{
	    if(strcmp(nombre, primero) < 0 && strcmp(nombre,"FIN") != 0 ) //Con la funcion strcmp se determina que el ultimo nombre ingresado es anterir al almacenado en primero si se los ordena alfabeticamente.
        {
            strcpy(primero, nombre); //El ultimo nombre ingresado ocupa el lugar del que estaba guardado en primero.
        }
    }

    aux=1; //la variable aux se utliza como flag para saber si se trata del primer ingreso o no.
    
  } while (strcmp(nombre,"FIN") != 0); //Se utiliza la funcion strcmp para saber si el string ingresado corresponde a la palabra FIN.
    
    printf("%s", primero); //Se imprime la varibale primero, puede corresponder al mensaje preestablecido FINALIZADO, o tambien al primer nombre de todos los ingresados.
	
	return 0;
}
