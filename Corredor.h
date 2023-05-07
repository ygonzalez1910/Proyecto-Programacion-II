#pragma once
#include "DatosBiometricos.h"
#include "Deportista.h"

class Corredor : public Deportista
{
public:
	Corredor(string, string, string, Fecha*, char, double);
	~Corredor();
	string toString() const;

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
	char sexo;
	double estatura;
	
};

