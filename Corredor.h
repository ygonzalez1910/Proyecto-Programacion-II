#pragma once
#include "DatosBiometricos.h"
#include "Deportista.h"

class Corredor : public Deportista
{
public:
	Corredor(string, string, string, Fecha*, char, double);
	~Corredor();
	string toString() const;

	virtual string getcedula() const;
	virtual string getnombre() const;
	virtual string gettelefono() const;
	virtual Fecha* getnacimiento() const;
	virtual string infoAdi() const;
	virtual string info() const;

protected:
	
	/*string cedula;
	string nombre;
	string telefono;
	Fecha* nacimiento;*/
	char sexo;
	double estatura;
	
};

