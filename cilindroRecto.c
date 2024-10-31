float radio, h, pi;
pi= 3.1416;

void calculoSuperficieCilindroLateral(radio, h){
    float superficie = 2*pi*radio*h;
}

void calculoSuperficieCilindroTransversal(radio,h){
    float superficie = 2*(pi*radio*h+pi*radio^2);
}

void calculoVolumenCilindro(radio,h){
    float volumen = pi*radio^2*h;
}