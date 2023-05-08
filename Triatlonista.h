#pragma once
#include "Deportista.h"
#include "DatosBiometricos.h"
using namespace std;
#include <iostream>

class Triatlonista : public Deportista
{
public:
	Triatlonista(Deportista*, int, int, bool); //Triatlonista(Deportista*, Deportista*, Deportista*,int, int, bool);
	virtual ~Triatlonista();
	virtual string toString() const;

	virtual void setCedula(string);
	virtual void setNombre(string);
	virtual void setTelefono(string);
	virtual void setNacimiento(Fecha*);
	virtual void setEstado(bool);

private:
	Deportista* base;
	int triaGanados;
	int triaParticipados;
	bool estado;
	bool pago; 
};

