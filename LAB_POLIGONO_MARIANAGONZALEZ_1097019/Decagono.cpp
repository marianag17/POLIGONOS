#include "Decagono.h"



Decagono::Decagono()
{
}

Decagono::Decagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int Decagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int Decagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}

Decagono::~Decagono()
{
}
