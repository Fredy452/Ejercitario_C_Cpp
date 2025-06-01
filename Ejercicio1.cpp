/*
* Cargar un vector de 6 elementos, permitir visualizar el vector de manera inversa a la que fue cargada
*/
#include <stdio.h>

// Definición del tipo de dato vector
typedef int vector[6];

/**
 * Función principal del programa
 * @return 0 si el programa se ejecuta correctamente
 */
int main()
{
    // Declaración de un vector de 6 elementos
    vector a;
    // Variable para iterar sobre el vector
    int i;

    // Pedimos al usuario que cargue 6 elementos en el vector
    printf("Cargue el vector:\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }

    // Mostramos el vector en orden inverso
    printf("El vector en orden inverso es:\n");
    for (i = 5; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}