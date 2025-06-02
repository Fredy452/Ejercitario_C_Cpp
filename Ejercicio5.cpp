#include <stdio.h>

// Definiciones globales
#define NUM_VECTOR 20
typedef int vector[NUM_VECTOR];

/**
 * Función Principal 
 * 
 * Esta función permite cargar un vector de 20 números y muestra
 * los numeros menores o igales a 25
 * 
 * @return 0 si la ejecución fue exitosa
 */
int main()
{
    // Declaración de las variables locales
    vector elementos = {0};
    int i = 0;

    // Pedimos al usuario que cargue el vector
    printf("Por favor ingrese %d numeros enteros\n", NUM_VECTOR);
    for ( i ; i < NUM_VECTOR; i++)
    {
        scanf("%d", &elementos[i]);
    }

    // Imprimos los numeros menores o iguales a 25
    for ( i = 0; i < NUM_VECTOR; i++)
    {
        if (elementos[i] <= 25)
        {
            printf("Mumeros menores o iguales a 25 < %d\n", elementos[i]);
        }
        
    }
    
    return 0;

}