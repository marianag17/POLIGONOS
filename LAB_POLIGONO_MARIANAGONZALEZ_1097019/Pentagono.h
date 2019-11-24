#pragma once
#include "Poligono.h"
class Pentagono :
	public Poligono
{
public:
	int lado;
	int apotema;
	int area();
	int perimetro();
public:
	Pentagono();
	Pentagono(int lado, int apotema);
	~Pentagono();
};

