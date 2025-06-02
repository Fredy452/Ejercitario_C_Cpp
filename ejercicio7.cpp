#include <stdio.h>

// Definiciones globales
#define NUM_ElEMENTOS 5
typedef int vector[NUM_ElEMENTOS];

/**
 * Función Principal Algoritmo de Rotación Circular de Array
 *
 * Esta función permite leer un vector P de 5 elementos
 * Permite desplazar cada elemento a al posición siguiente del vector
 *
 * @return 0 si se ejecuto correctamente
 */
int main()
{
    // Declaración de las variables locales
    vector p = {0};
    int ultimoIndice = 0;
    int i = 0;

    // Pedimos al usuario que ingrese los datos
    printf("Ingrese %d numeros enteros: \n", NUM_ElEMENTOS);
    for (i; i < NUM_ElEMENTOS; i++)
    {
        scanf("%d", &p[i]);
    }

    // Guarddamos el ultimo elemento
    ultimoIndice = p[NUM_ElEMENTOS - 1];;
    for (i = NUM_ElEMENTOS - 1; i > 0; i--)
    {
        p[i] = p[i - 1];
    }
    p[0] = ultimoIndice;

    printf("****************************\n");
    printf("*       Vector Invertido   *\n");
    printf("****************************\n\n");

    for (i = 0; i < NUM_ElEMENTOS; i++)
    {
        printf("%d\n \n", p[i]);
    }

    return 0;
}
