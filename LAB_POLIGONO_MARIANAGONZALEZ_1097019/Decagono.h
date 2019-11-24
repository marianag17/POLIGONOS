#pragma once
#include "Poligono.h"
class Decagono :
	public Poligono
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	Decagono();
	Decagono(int lado, int apotema);
	~Decagono();
};

