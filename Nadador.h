#pragma once
#include "Triatlonista.h"
#include "DatosBiometricos.h"

class Nadador : public Triatlonista
{
public:
	Nadador(Deportista*);
	virtual ~Nadador();
	virtual string toString();
private:
	DatosBiometricos* datosBiometricos;
};

