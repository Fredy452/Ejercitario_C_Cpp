#include <stdio.h>

/**
 * Definición de la función principal
 *
 * Esta función carga un vector de 8 elementos, calcula el promedio de las notas,
 * cuenta cuántas materias fueron aprobadas (nota >= 2) y cuántas fueron aplazadas (nota < 2).
 *
 * @return 0 si se ejecutó correctamente
 */
int main()
{
    // Definimos un vector de tipo entoro de 8 elementos de ambito local
    typedef int vector[8];

    // Delaramos las variables
    vector notas = {0}; // Inicializa todo el array con ceros
    float promedio = 0.0f;
    int suma = 0;
    int mAprobada = 0;
    int mAplazada = 0;
    int i = 0;

    // Pedimos al alumno que ingrese sus notas
    printf("Por favor ingrese sus notas en numero entero: \n");

    // Recorremos con el bucle for cada nota ingresada y guardamos en el vector
    for (i = 0; i < 8; i++)
    {
        // Guardamos los valores ingresados
        scanf("%d", &notas[i]);
        suma += notas[i];

        // Conocer materia aplazadas
        if (notas[i] >= 2)
        {
            mAprobada ++;
        }else{
            mAplazada ++;
        }
    }

    // Calculamos el promedio
    promedio = (float)suma / 8;

    printf("****************************\n");
    printf("*        Resultados        *\n");
    printf("****************************\n\n");

    printf("El promedio es: %f\n", promedio);
    printf("Cantidad de materia aprobadas: %d\n", mAprobada);
    printf("Cantidad de materias aplazadas: %d \n", mAplazada);

    return 0;
}