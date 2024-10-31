#include "figuras2d.h"
#include <stdio.h>
#include "menu2D.h"
void menu2D() {
    int opcion;

    printf("\nSeleccione una figura geométrica 2D:\n");
    printf("1. Triángulo\n");
    printf("2. Paralelogramo\n");
    printf("3. Cuadrado\n");
    printf("4. Rectángulo\n");
    printf("5. Rombo\n");
    printf("6. Trapecio\n");
    printf("7. Círculo\n");
    printf("8. Polígono regular\n");
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
        default: printf("Opción no válida.\n");
    }
}