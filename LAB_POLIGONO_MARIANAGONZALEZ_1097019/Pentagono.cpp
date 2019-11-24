#include "Pentagono.h"



Pentagono::Pentagono()
{
}
Pentagono::Pentagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int Pentagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int Pentagono::perimetro() {
	int perimetro = 5 * lado;
	return perimetro;
}

Pentagono::~Pentagono()
{
}
