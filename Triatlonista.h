#pragma once
#include "Deportista.h"
#include "DatosBiometricos.h"
using namespace std;
#include <iostream>
class Triatlonista : public Deportista
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

