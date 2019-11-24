#pragma once
#include "Poligono.h"
class Hexagono :
	public Poligono
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	Hexagono();
	Hexagono(int lado, int apotema);
	~Hexagono();
};

