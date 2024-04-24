#include <stdio.h>

int main() {
    int seleccion;
    char opcion;
    char C17[][40] = {
        "Santa Lucia",        
        "Quiroga",
        "Restrepo"
    };
    char C19[][40] = {
        "La Campiña",        
        "Suba-TC.91",
        "Puentelargo"
    };
        char C25[][40] = {
        "AV. 1° de mayo",        
        "Bicentenario",
        "Movistar Arena"
    };
    char Feriados[][40] = {
        "C15",        
        "F19"
    };

    
    printf("\tBienvenido a su App de transportes");
    printf("\n1.Consultar rutas");
    printf("\n2.Disposicion de rutas en dias feriados");
    printf("\n3.Salir");
    printf("\n seleccion: ");
    
    scanf("%i",&seleccion);
    
    switch(seleccion){
        case 1:printf("\nIngrese ruta que desea consultar: \n");
                scanf("%s",&opcion);
                if(C17 == opcion){
                printf("Las paradas son:\n");
                for (int i = 0; i < 10; i++) {   
                printf("%s\n", C17[i]); 
                
                }break;
                }
                else if(C19 == C19){
                printf("Las paradas son:\n");
                for (int i = 0; i < 10; i++) {   
                printf("%s\n", C19[i]); 
                }break;
                }
                else {
                printf("Las paradas son:\n");
                for (int i = 0; i < 10; i++) {   
                printf("%s\n", C25[i]);
                    
                }
                }
             }
        break;
        case 2:
                printf("Las rutas que trabajan los dias feriados son:\n");
                for (int i = 0; i < 10; i++) {   
                printf("%s\n", Feriados[i]);   
                }
        
        break;
        case 3:
        
        break;
        
    }
    

    return 0;
}

https://onlinegdb.com/lST0UD5qb
