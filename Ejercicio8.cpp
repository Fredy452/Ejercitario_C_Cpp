#include <stdio.h>

// Definiones Globales
#define NUM_ELEMENTOS 8
typedef int vector[NUM_ELEMENTOS];

/**
 * Función Principal
 *
 * Esta función permite hallar el elemento menor de todo aquel elemento que
 * ocupa una posición impar, imprimir el elemento y la posición
 *
 * @return 0 si se ejecuto correctamente
 */
int main()
{
    // Definimos las variables locales
    vector numeros = {0};
    int menorImpar = 0;
    int posMenorImpar = 0;
    int i = 0;

    // Pedimos los numeros al usuario
    printf("Ingrese %d numeros enteros: \n", NUM_ELEMENTOS);
    for (i; i < NUM_ELEMENTOS; i++)
    {
        scanf("%d", &numeros[i]);
    }

    // Inicializar los valores al inicio23
    menorImpar = 999999;
    posMenorImpar = -1;

    for (i = 0; i < NUM_ELEMENTOS; i++)
    {

        if (numeros[i] % 2 == 1)
        {
            if (numeros[i] < menorImpar)
            {
                menorImpar = numeros[i];
                posMenorImpar = i;
            }
        }
    }

    printf("****************************\n");
    printf("*       Resultado          *\n");
    printf("****************************\n\n");
    printf("El menor numero impar ingresado es %d \n", menorImpar);
    printf("La posición del menor impar es %d \n", posMenorImpar);

    return 0;
}