#pragma once
#include "Triatlonista.h"

class Nadador
{
public:
	Nadador(double, double, double);
	virtual ~Nadador();
	virtual string toString();
protected:
	double masaMuscular;
	double peso;
	double porcentajeGrasaCorporal;
};

