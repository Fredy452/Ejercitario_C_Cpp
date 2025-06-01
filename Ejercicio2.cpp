/**
 * Cargar un vector de 4 elementos, informar la suma de sus elementos
 */
#include <stdio.h>

/**
 * Función proncipal 
 * @return 0 si se ejecuto correctamente
 */
int main()
{
    // Definimos el tipo de dato del vector de ambito local
    typedef int vector[4];

    // Declaramos las variables
    vector z;
    int suma;
    int i;

    // Pedimos al usuario que ingrese los 4 elementos
    printf("Por favor cargue 4 numeros enteros: \n");
    for ( i = 0; i < 4; i++)
    {
        // Guardamos los datos que introdujo el usuario
        scanf("%d", &z[i]);

        // A medida que va iterando el valor en en el for vamos a ir sumando los valores
        suma += z[i];
    }

    printf("La suma de los elementos de los vectores es: %d\n", suma);

    return 0;
    
}