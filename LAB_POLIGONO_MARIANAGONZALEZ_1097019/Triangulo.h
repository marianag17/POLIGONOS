#pragma once
#include "Poligono.h"
class Triangulo :
	public Poligono
{
public:
	int lado1;
	int lado2;
	int lado3;
	int base;
	int altura;
public:
	int area();
	int perimetro();
public:
	Triangulo();
	Triangulo(int l1, int l2, int l3, int base, int altura);
	~Triangulo();
};

