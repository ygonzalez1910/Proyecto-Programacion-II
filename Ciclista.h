#pragma once
#include "Deportista.h"
#include "DatosBiometricos.h"

class Ciclista : public Deportista
{
public:
	Ciclista(int, double);
	~Ciclista();
	string toString();

protected:
	int horasEntrenamiento;
	double temPromedio;
	DatosBiometricos datosBiometricos;
};

