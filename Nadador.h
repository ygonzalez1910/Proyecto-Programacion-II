#pragma once
#include "Triatlonista.h"
#include "DatosBiometricos.h"

class Nadador
{
public:
	Nadador(double, double, double);
	virtual ~Nadador();
	virtual string toString();
private:
	double masaMuscular;
	double peso;
	double porcentajeGrasaCorporal;
	DatosBiometricos datosBiometricos;
};

