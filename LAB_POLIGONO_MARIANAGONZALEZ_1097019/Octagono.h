#pragma once
#include "Poligono.h"
class Octagono :
	public Poligono
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	Octagono();
	Octagono(int lado, int apotema);
	~Octagono();
};

