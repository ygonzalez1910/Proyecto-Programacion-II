#pragma once
#include "Deportista.h"
#include "DatosBiometricos.h"
using namespace std;
#include <iostream>
class Triatlonista : public Deportista
{
public:
	Triatlonista(string, string, string, Fecha*, Fecha*, int, int);
	~Triatlonista();
	string toString();
private:
	int cantidadParticipacionesEnIronMan;
	int cantidadTriatlonesGanados;
};

