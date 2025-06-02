#include <stdio.h>

// Definiciones globales
#define NUM_EDAD 10
typedef int vector[NUM_EDAD];

/**
 * Función Principal 
 * 
 * Este función permite ingresar un vector de 10 edades enteros positivos
 * Para hallar la menor edad ingresada
 */
int main()
{
    // Declaracion de las variables locales
    vector edades = {0};
    int menorEdad = 0;
    int i = 0;

    // Pedimos las edades
    printf("Ingrese lista de %d edades \n", NUM_EDAD);
    for ( i ; i < NUM_EDAD; i++)
    {
        scanf("%d", &edades[i]);
    }

    // Asumiendo que edades[i] es el menor
    menorEdad = edades[0];
    for ( i = 1 ; i < NUM_EDAD; i++)
    {
        if (edades[i] < menorEdad)
        {
            menorEdad = edades[i];
        }
        
    }

    printf("****************************\n");
    printf("*        Resultado        *\n");
    printf("****************************\n\n");

    printf("El numero menor es: %d\n", menorEdad);
    
    return 0;
}