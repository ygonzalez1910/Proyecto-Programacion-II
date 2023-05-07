#pragma once
#include "Deportista.h"
#include "DatosBiometricos.h"


class Ciclista : public Deportista
{
public:
	Ciclista(string, string, string, Fecha*, int, double);
	virtual ~Ciclista();
	virtual string toString() const;

	virtual string cedula() const;
	virtual string nombre() const;
	virtual string telefono() const;
	virtual Fecha* nacimiento() const;
	virtual string infoAdi() const;
	virtual string info() const;

protected:
	string cedula;
	string nombre;
	string telefono;
	Fecha* nacimiento;
	int horasEntrenamiento;
	double temPromedio;
	//DatosBiometricos datosBiometricos;
};

