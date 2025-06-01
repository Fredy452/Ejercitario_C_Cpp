#include <stdio.h>

// Definiciones globales
#define CANT_MATERIAS 7
typedef int vector[CANT_MATERIAS];


/**
 * Función Principal 
 * 
 * Esta función permite cargar un vector de 7 elementos.
 * Para hallar e informar el mayor elemento con su posición correspondiente
 * 
 * @return 0 si se ejecutó correctamente
 */
int main()
{
    // Declaración de las variables locales
    vector elementos = {0};
    int mayor = 0;
    int posicion = 0;
    int i = 0;

    // Pedimos al usuario que ingrese los valores
    printf("Por favor ingrese 7 numeros enteros: \n");

    // Recorremos con un for y guardamos en la variable elementos
    for ( i = 0; i < CANT_MATERIAS; i++)
    {
        scanf("%d", &elementos[i]);
    }

    // Consideramos que el primer valor del vector es el mayor 
    mayor = elementos[0];

    // Comparamos el elemeto en la posicion i con 0 para saber cual es el mayor
    for ( i = 1; i < CANT_MATERIAS; i++)
    {
        if (elementos[i] > mayor)
        {
            mayor = elementos[i];
            posicion = i;
        }
        
    }

    printf("****************************\n");
    printf("*        Resultados        *\n");
    printf("****************************\n\n");

    printf("El numero mayor es: %d\n", mayor);
    printf("Esta en la posición: %d\n", posicion);

    return 0;
    
    
}