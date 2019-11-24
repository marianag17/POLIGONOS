#include "Heptagono.h"



Heptagono::Heptagono()
{
}
Heptagono::Heptagono(int lad, int apot)
{
	lado = lad;
	apotema = apot;
}

int Heptagono::area() {
	int area = (perimetro() * apotema) / 2;
	return area;
}

int Heptagono::perimetro() {
	int perimetro = 6 * lado;
	return perimetro;
}



Heptagono::~Heptagono()
{
}
