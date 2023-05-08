#pragma once
#include "Deportista.h"
#include "DatosBiometricos.h"


class Ciclista : public Deportista
{
public:
	Ciclista(string, string, string, Fecha*, int, double);
	virtual ~Ciclista();
	virtual string toString() const;

	virtual string getcedula() const;
	virtual string getnombre() const;
	virtual string gettelefono() const;
	virtual Fecha* getnacimiento() const;
	virtual string infoAdi() const;
	virtual string info() const;

protected:
	string cedula;
	string nombre;
	string telefono;
	Fecha* nacimiento;
	int horasEntrenamiento;
	double temPromedio;
	
};

