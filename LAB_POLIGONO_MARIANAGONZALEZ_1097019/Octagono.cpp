#include "Octagono.h"



Octagono::Octagono()
{
}
Octagono::Octagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int Octagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int Octagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}

Octagono::~Octagono()
{
}
