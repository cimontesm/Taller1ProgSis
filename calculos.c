#include <math.h>

int radio;
int pi = 3.1416;


void calcularPerimetroCirculo(){
    float perimetro = radio*2*pi;

}

void calcularAreaCirculo(){
    float area = pi * pow(radio,2);
}

float a,b,h;

void calcularPerimetroParalelogramo(){
    float perimetro = 2*(a+b);
}

void calcularAreaParalelogramo(){
    float area = b*h;
}

int cant;
float lado, apotema;

void calculoPerimetroPoligono(){
    float perimetro = cant*lado;
}

void calculoAreaPoligono(){
    float area = (cant*lado*apotema)/2;
}

float b, h;

void calcularPerimetroRectangulo(){
    float perimetro = 2*(b+h);
}

void calculaAreaRectangulo(){
    float area = b*h;
}

float lado, base, altura;

void calcularPerimetroRombo(){
    float perimetro = 4*lado;
}

void calcularAreaRombo(){
    float area = (base*altura)/2;
}

float lado1,lado2,lado3,lado4,baseMenor,baseMayor,altura;

void calcularPerimetroTrapecio(){
    float perimetro = lado1+lado2+lado3+lado4;
}

void calcularAreaTrapecio(){
    float area = ((baseMenor+baseMayor)*altura)/2;
}

float lado1,lado2,lado3,base,altura;

void calcularPerimetroTriangulo(){ 
    float perimetro = lado1+lado2+lado3;
}

void calcularAreaTriangulo(){
    float area = (base*altura)/2;
}

float radio, h, pi;


void calculoSuperficieCilindroLateral(){
    float superficie = 2*pi*radio*h;
}

void calculoSuperficieCilindroTransversal(){
    float superficie = 2*(pi*radio*h+pi*radio*radio);
}

