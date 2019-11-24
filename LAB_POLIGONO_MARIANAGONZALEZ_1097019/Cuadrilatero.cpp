#include "Cuadrilatero.h"



Cuadrilatero::Cuadrilatero()
{
}
Cuadrilatero::Cuadrilatero(int lad)
{
	lado = lad;
}

int Cuadrilatero::area() {
	int area = lado * lado;
	return area;
}

int Cuadrilatero::perimetro() {
	int perimetro = 4 * lado;
	return perimetro;
}

Cuadrilatero::~Cuadrilatero()
{
}
