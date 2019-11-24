#include "Hexagono.h"



Hexagono::Hexagono()
{
}
Hexagono::Hexagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int Hexagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int Hexagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}

Hexagono::~Hexagono()
{
}
