#pragma once
#include "Deportista.h"

class Nadador : public Deportista 
{
public:
	Nadador(double, double, double);
	virtual ~Nadador();
	virtual string toString();

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
	double masaMuscular;
	double peso;
	double porcentajeGrasaCorporal;
};

