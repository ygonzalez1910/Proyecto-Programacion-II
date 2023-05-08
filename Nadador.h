#pragma once
#include "Deportista.h"

class Nadador : public Deportista 
{
public:
	Nadador(string, string, string, Fecha*, double, double, double);
	virtual ~Nadador();
	virtual string toString();

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
	double masaMuscular;
	double peso;
	double porcentajeGrasaCorporal;
};

