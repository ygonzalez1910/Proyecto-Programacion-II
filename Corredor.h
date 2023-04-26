#pragma once
#include "DatosBiometricos.h";
#include "Triatlonista.h"

class Corredor
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

