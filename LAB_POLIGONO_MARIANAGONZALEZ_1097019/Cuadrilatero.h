#pragma once
#include "Poligono.h"
class Cuadrilatero :
	public Poligono
{

public:
	int lado;
	int area();
	int perimetro();
	Cuadrilatero(int lado);
	Cuadrilatero();
	~Cuadrilatero();
};

