/* 6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. 
Para simplificar el problema, trabaje solo con mayúsculas. */

#include<stdio.h>

int main(){
	
	char palabra[19]; //Variable que guarda la palabra ingresada.
	int abecedario[26]; //Variable que guarda la cantidad de veces que se repite una letra en la palabra ingresada.
	int i = 0; //Auxiliares
	int j = 0;
	int maximo = 0; 
	int contador = 0;
	int letrarepe = 0; //Flag utilizada para saber si hay letras repetidas o no.
	char letramax; 
	
	printf("Ingrese una palabra: "); //Se pide al usuario el ingreso de la palabra.
	scanf("%s", palabra);
	
	do{             //Se cuenta la cantidad de letras que tiene la palabra ingresada.
	    contador++;     
	}
	while(palabra[i++] != '\0'); 
	
	for(i=0; i<=26; i++){
		abecedario[i] = 0; //Se inicializa el vector abecedario con todas sus posiciones en 0.
	}
	 
    for(i=0; i<=contador - 1; i++) //i toma valores desde 0 hasta la longitud de la palabra sin contar el \0
    {
        for(j=0; 65+j<=90; j++)
        {
            if(palabra[i] == 65+j){  //Si la letra almacenada en palabra[i] corresponde al 65+j del codigo ascci, se anota la repeticion en el vector abecedario.
                abecedario[j] = abecedario[j] + 1;
            }   
        }
    }
    
    for(i=0; i<=26; i++) 
	{
		if(abecedario[i] > maximo)  //Se compara cual es el numero mas grande dentro del vector abecedario.
		{
			maximo = abecedario[i];
			letramax = i + 65;     //Se guarda la letra a la cual corresponde la posicion del vector abecedario, ya que este ocupo el lugar del maximo. 
		}
	}	
	
	for(i=0; i<=26; i++)
	{
        if(abecedario[i] == maximo && abecedario[i]!= 0) //Si hay mas de una letra que se repite una mayor cantidad de veces, se activa la flag letrarepe.
        {
            letrarepe++;   //No solo me interesa saber que hay letras repetidas, especificamente quiero saber si se repiten la cantidad de veces marcada como maximo anteriormente.
        }                
	}
        	
    if(letrarepe > 1){
        printf("Mas de una letra aparece mayor cantidad de veces."); //Si hay letras repetidad, no se aclara cuales son las que se repiten
    }
    else
    {
        printf("La letra que mas se repite es: %c", letramax); //Si hay una unica letra que aparece mayor cantidad de veces, se imprime la variable letra max modificada anteriormente.
    }
	
	return 0;
}
