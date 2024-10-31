#include <math.h>
#include "figuras2d.h"
#define  PI 3.14159265358979323846


void triangulo() {
    float base, altura, lado1, lado2, lado3;
    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);
    printf("Ingrese los tres lados del triángulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    printf("Área: %.2f\n", (base * altura) / 2);
    printf("Perímetro: %.2f\n", lado1 + lado2 + lado3);
}

void paralelogramo() {
    float base, altura, lado;
    printf("Ingrese la base del paralelogramo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del paralelogramo: ");
    scanf("%f", &altura);
    printf("Ingrese la longitud del lado: ");
    scanf("%f", &lado);
    printf("Área: %.2f\n", base * altura);
    printf("Perímetro: %.2f\n", 2 * (base + lado));
}

void cuadrado() {
    float lado;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    printf("Área: %.2f\n", lado * lado);
    printf("Perímetro: %.2f\n", 4 * lado);
}

void rectangulo() {
    float base, altura;
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);
    printf("Área: %.2f\n", base * altura);
    printf("Perímetro: %.2f\n", 2 * (base + altura));
}

void rombo() {
    float D, d, lado;
    printf("Ingrese la diagonal mayor del rombo: ");
    scanf("%f", &D);
    printf("Ingrese la diagonal menor del rombo: ");
    scanf("%f", &d);
    printf("Ingrese el lado del rombo: ");
    scanf("%f", &lado);
    printf("Área: %.2f\n", (D * d) / 2);
    printf("Perímetro: %.2f\n", 4 * lado);
}

void trapecio() {
    float B, b, altura, lado1, lado2;
    printf("Ingrese la base mayor del trapecio: ");
    scanf("%f", &B);
    printf("Ingrese la base menor del trapecio: ");
    scanf("%f", &b);
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &altura);
    printf("Ingrese los dos lados no paralelos: ");
    scanf("%f %f", &lado1, &lado2);
    printf("Área: %.2f\n", ((B + b) * altura) / 2);
    printf("Perímetro: %.2f\n", B + b + lado1 + lado2);
}

void circulo() {
    float radio;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    printf("Área: %.2f\n", PI * radio * radio);
    printf("Perímetro (circunferencia): %.2f\n", 2 * PI * radio);
}

void poligono() {
    float perimetro, apotema, num_lados, lado;
    printf("Ingrese el número de lados del polígono: ");
    scanf("%f", &num_lados);
    printf("Ingrese la longitud de un lado: ");
    scanf("%f", &lado);
    printf("Ingrese el apotema del polígono: ");
    scanf("%f", &apotema);
    perimetro = num_lados * lado;
    printf("Área: %.2f\n", (perimetro * apotema) / 2);
    printf("Perímetro: %.2f\n", perimetro);
}