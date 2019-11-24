#pragma once
#include "Poligono.h"
class Eneagono :
	public Poligono
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	Eneagono();
	Eneagono(int lado, int apotema);
	~Eneagono();
};

