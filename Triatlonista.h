#pragma once
#include "Deportista.h"
#include "DatosBiometricos.h"
using namespace std;
#include <iostream>
#include "Corredor.h"
#include "Nadador.h"
#include "Ciclista.h"

class Triatlonista
{
public:
	Triatlonista(Corredor*, Nadador*, Ciclista*, int, int, bool);
	virtual ~Triatlonista();
	virtual string toString() const;

	virtual void setCedula(string);
	virtual void setNombre(string);
	virtual void setTelefono(string);
	virtual void setNacimiento(Fecha*);
	virtual void setEstado(bool);

private:
	Deportista* corredor;
	Deportista* nadador;
	Deportista* ciclista;
	int triaGanados;
	int triaParticipados;
	bool estado;
	bool pago; 
};

