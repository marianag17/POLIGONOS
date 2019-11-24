#include "Triangulo.h"



Triangulo::Triangulo()
{
}
Triangulo::Triangulo(int l1, int l2, int l3, int bas, int alt) {
	lado1 = l1;
	lado2 = l2;
	lado3 = l3;
	base = bas;
	altura = alt;
}

int Triangulo::area() {
	int area = (base * altura) / 2;
	return area;
}

int Triangulo::perimetro() {
	int perimetro = lado1 + lado2 + lado3;
	return perimetro;
}

Triangulo::~Triangulo()
{
}
