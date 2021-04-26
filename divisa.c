#include<stdio.h>
#include<stdlib.h>
int main()
{
    float dolar = 19.83, euro = 23.96, libra = 27.56, cantidad;
    int opcion;
    printf("Bienvenido a la calculadora de cambio de divisas\n");
    printf("Selecciona una opcion:\n");
    printf(" 1. Pesos a Dolar americano\n 2. Dolar Americano a Pesos\n 3. Pesos a Euros\n 4. Euros a Pesos\n 5. Pesos a Libras Esterlinas\n 6. Libras Esterlinas a Pesos\n");
    scanf("%d", &opcion);
    
if (opcion >= 7){
    printf("Elige una opcion valida\n");
    exit (0);
}
else{
    printf("ingresa la cantidad a convertir:\n");  
    scanf("%f", &cantidad);

    switch ( opcion )
    {
    case 1:
        printf("%0.2f pesos equivalen a: %0.3f dolares americanos  \n", cantidad, (cantidad * (1 / dolar)));
        break;
    
    case 2:
        printf("%0.2f dolares equivalen a: %0.3f pesos  \n", cantidad, (cantidad * dolar));
        break;

    case 3:
        printf("%0.2f pesos equivalen a: %0.3f Euros  \n", cantidad, (cantidad * (1 / euro)));
        break;

    case 4:
        printf("%0.2f euros equivalen a: %0.3f pesos  \n", cantidad, (cantidad * euro));
        
        break;

    case 5:
        printf("%0.2f pesos equivalen a: %0.3f libras esterlinas \n", cantidad, (cantidad * (1 / libra)));
        
        break;

    case 6:
        printf("%0.2f libras esterlinas equivalen a: %0.3f pesos  \n", cantidad, (cantidad * libra));
        
        break;
    case 7:
        printf("Error \n Elige una opcion valida\n");
        break;
  
    }
    return 0;

    }

}