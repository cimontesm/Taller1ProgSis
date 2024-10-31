#include <stdio.h>

int main(){
    int opcion;
    
    do {
        printf("\nSeleccione una figura geométrica para calcular el área:\n");
        printf("1. Triángulo\n");
        printf("2. Paralelogramo\n");
        printf("3. Cuadrado\n");
        printf("4. Rectángulo\n");
        printf("5. Rombo\n");
        printf("6. Trapecio\n");
        printf("7. Círculo\n");
        printf("8. Polígono regular\n");
        printf("9. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: triangulo(); break;
            case 2: paralelogramo(); break;
            case 3: cuadrado(); break;
            case 4: rectangulo(); break;
            case 5: rombo(); break;
            case 6: trapecio(); break;
            case 7: circulo(); break;
            case 8: poligono(); break;
            case 9: printf("Saliendo del programa...\n"); break;
            default: printf("Opción no válida. Intente nuevamente.\n");
        }
    } while(opcion != 9);

    return 0;
}
