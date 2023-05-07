#pragma once
#include "Deportista.h"
#include "DatosBiometricos.h"
using namespace std;
#include <iostream>

class Triatlonista : public Deportista
{
public:
	Triatlonista(Deportista*, Deportista*, Deportista*, int, int);
	virtual ~Triatlonista();
	virtual string toString() const;
private:
	Deportista* corredor;
	Deportista* nadador;
	Deportista* ciclista;
	int triaGanados;
	int triaParticipados;
	bool estado;
	bool pago; 
};

