#pragma once
#include "Deportista.h"

class Nadador : public Deportista 
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

