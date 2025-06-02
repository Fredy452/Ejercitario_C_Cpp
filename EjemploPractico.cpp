#include <stdio.h>

#define DIAS_SEMANA 7

int main() {
    // Vector con los días de la semana
    char* diasSemana[DIAS_SEMANA] = {
        "Lunes", "Martes", "Miercoles", "Jueves", 
        "Viernes", "Sabado", "Domingo"
    };
    
    int diaActual;
    
    // Pedimos al usuario que ingrese el día actual (0-6)
    printf("Ingrese el día actual (0=Lunes, 1=Martes, ..., 6=Domingo): ");
    scanf("%d", &diaActual);
    
    if (diaActual < 0 || diaActual >= DIAS_SEMANA) {
        printf("Día inválido\n");
        return 1;
    }
    
    // Calculamos el día siguiente usando rotación circular
    int diaSiguiente = (diaActual + 1) % DIAS_SEMANA;
    
    printf("Día actual: %s\n", diasSemana[diaActual]);
    printf("Día siguiente: %s\n", diasSemana[diaSiguiente]);
    
    return 0;
}