#pragma once
#include "DatosBiometricos.h";
#include "Triatlonista.h"

class Corredor : public Triatlonista
{
public:
	Corredor(Deportista*, char, double);
	~Corredor();
	string toString();
private:
	char sexo;
	double estatura;
	DatosBiometricos* datosBiometricos;
};

