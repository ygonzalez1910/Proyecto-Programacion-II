#pragma once
#include "DatosBiometricos.h"
#include "Deportista.h"

class Corredor : public Deportista
{
public:
	Corredor(char, double);
	~Corredor();
	string toString();
protected:
	char sexo;
	double estatura;
	DatosBiometricos datosBiometricos;
};

