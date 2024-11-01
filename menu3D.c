#include <stdio.h>
#include "datos.h"
#include "menu3D.h"
void menu3D() {
    int opcion;

    printf("\nSeleccione una figura geométrica 3D:\n");
    printf("1. Cubo\n");
    printf("2. Cuboide\n");
    printf("3. Cilindro recto\n");
    printf("4. Esfera\n");
    printf("5. Cono circular recto\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1: cubo(); break;
        case 2: cuboide(); break;
        case 3: cilindro(); break;
        case 4: esfera(); break;
        case 5: cono(); break;
        default: printf("Opción no válida.\n");
    }
}