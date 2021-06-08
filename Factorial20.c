#include <stdio.h>
#include <stdlib.h>

long factorial(long x);

int main(){
	
	long numero, operacion;
	int reinicio;

		printf("\nCALCULO DE UN NUMERO FACTORIAL\n\n");
		printf("\nNOTA:\nEsteprograma esta limitado hasta el calculo del número 20\n");
    	printf("\n¿Qué número vamos a calcular?");
	
	do{
		
		printf("\nEscribe tu número y presiona enter:\n");
		scanf("%ld", &numero);

		if(numero > 0){
			
			operacion = factorial (numero);
			
			printf("El factorial de %ld es: %ld ", numero, operacion);
		
		}
		
		else{
			
			do{
				system("color 04");
				printf("¡No existe el factorial de un numero negativo!\n");
				system("color 01");
				printf("\nPor favor ingresa un número positivo menor o igual a 20: ");
				scanf("%ld", &numero);
				
			}while(numero < 0);	
			
			operacion = factorial (numero);
		
			printf("El factorial del número %ld es: %ld", numero, operacion);
		
		}
		
			printf("\t\n\nPara realizar un nuevo cálculo, presiona 1\nDe lo contrario presiona otra tecla y después enter\n");
			scanf("%d", &reinicio);
		
	}while(reinicio == 1); 
		
		
	
	return 0;
}

long factorial(long x){
	
	if(x == 0 || x == 1){
		
		return 1;
	}
	
	else{
		
		return x * factorial (x - 1);
	}
	
}
