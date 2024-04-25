#include <stdio.h>
#include <string.h>//  se utiliza para incluir la función strcmp(), que se utiliza para comparar dos cadenas de caracteres.

int main() {
    int seleccion;
    char opcion[10];
    char Rutas[4][3][40] = {
        {"Santa Lucia", "Quiroga", "Restrepo"}, // C17
        {"La Campiña", "Suba-TC.91", "Puentelargo"}, // C19
        {"AV. 1° de mayo", "Bicentenario", "Movistar Arena"}, // C25
        {"C15", "F19"} // Feriados
    };

    printf("\tBienvenido a su App de transportes\n");
    printf("1. Consultar rutas\n");
    printf("2. Disposicion de rutas en dias feriados\n");
    printf("3. Salir\n");
    printf("Seleccion: ");
    
    scanf("%d", &seleccion);
    
    switch(seleccion) {
        case 1:
            printf("Ingrese ruta que desea consultar: ");
            scanf("%s", opcion);
            
            if (strcmp(opcion, "C17") == 0) {
                printf("Las paradas son:\n");
                printf("%s\n%s\n%s\n", Rutas[0][0], Rutas[0][1], Rutas[0][2]);
            } else if(strcmp(opcion, "C19") == 0) {
                printf("Las paradas son:\n");
                printf("%s\n%s\n%s\n", Rutas[1][0], Rutas[1][1], Rutas[1][2]);
            } else if(strcmp(opcion, "C25") == 0) {
                printf("Las paradas son:\n");
                printf("%s\n%s\n%s\n", Rutas[2][0], Rutas[2][1], Rutas[2][2]);
            } else {
                printf("no se encontro ninguna ruta\n");
            }
            break;
            
        case 2:
            printf("Las rutas que trabajan los dias feriados son:\n");
            printf("%s\n%s\n", Rutas[3][0], Rutas[3][1]);
            break;
            
        case 3:
            printf("Salir");
            break;
            
    }

    return 0;
}


LINK DE GBD Online

https://onlinegdb.com/sw0L_Ie5a
