#include "Eneagono.h"



Eneagono::Eneagono()
{
}
Eneagono::Eneagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int Eneagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int Eneagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}

Eneagono::~Eneagono()
{
}
