#pragma once
#include "Poligono.h"
class Heptagono :
	public Poligono
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	Heptagono();
	Heptagono(int lado, int apotema);
	~Heptagono();
};

