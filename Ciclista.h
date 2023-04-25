#pragma once
#include "Triatlonista.h"
#include "DatosBiometricos.h"

class Ciclista : public Triatlonista
{
public:
	Ciclista(Deportista*, int, double);
	~Ciclista();
	string toString();

private:
	int horasEntrenamiento;
	double temPromedio;
	DatosBiometricos* datosBiometricos;
};

