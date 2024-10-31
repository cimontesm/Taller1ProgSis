#include "figuras3d.h"
#include <stdio.h>
#define  PI 3.14159265358979323846
void cubo() {
    float lado;
    printf("Ingrese el lado del cubo: ");
    scanf("%f", &lado);
    printf("Superficie: %.2f\n", 6 * lado * lado);
    printf("Volumen: %.2f\n", pow(lado, 3));
}

void cuboide() {
    float largo, ancho, altura;
    printf("Ingrese el largo del cuboide: ");
    scanf("%f", &largo);
    printf("Ingrese el ancho del cuboide: ");
    scanf("%f", &ancho);
    printf("Ingrese la altura del cuboide: ");
    scanf("%f", &altura);
    printf("Superficie: %.2f\n", 2 * (largo * ancho + ancho * altura + largo * altura));
    printf("Volumen: %.2f\n", largo * ancho * altura);
}

void cilindro() {
    float radio, altura;
    printf("Ingrese el radio del cilindro: ");
    scanf("%f", &radio);
    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &altura);
    printf("Superficie: %.2f\n", 2 * PI * radio * (radio + altura));
    printf("Volumen: %.2f\n", PI * pow(radio, 2) * altura);
}

void esfera() {
    float radio;
    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &radio);
    printf("Superficie: %.2f\n", 4 * PI * pow(radio, 2));
    printf("Volumen: %.2f\n", (4.0/3) * PI * pow(radio, 3));
}

void cono() {
    float radio, altura;
    
    printf("Ingrese el radio del cono: ");
    scanf("%f", &radio);
    printf("Ingrese la altura del cono: ");
    scanf("%f", &altura);
    printf("Superficie: %.2f\n", PI * radio * (radio + sqrt(pow(altura, 2) + pow(radio, 2))));
    printf("Volumen: %.2f\n", (PI * pow(radio, 2) * altura) / 3);
}