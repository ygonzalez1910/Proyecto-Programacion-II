#pragma once
#include "Corredor.h"
#include "Nadador.h"
#include "Ciclista.h"
#include "DatosBiometricos.h"
using namespace std;
#include <iostream>

class Triatlonista : public Corredor, public Ciclista, public Nadador
{
public:
	Triatlonista(int, int, DatosBiometricos*);
	~Triatlonista();
	string toString();
private:
	int cantiParticEnIronMan;
	int cantTriatGanados;
	DatosBiometricos* datos;
};

