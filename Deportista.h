#pragma once
#include "Fecha.h"
#include "DatosBiometricos.h"
#include "ObjetoBase.h"
#include <iostream>
using namespace std;

class Deportista : public ObjetoBase
{
public:
	Deportista(string, string, string, Fecha*);

	virtual string toString() const;
	virtual string getcedula() const = 0;
	virtual string getnombre() const = 0;
	virtual string gettelefono() const = 0;
	virtual Fecha* getnacimiento() const = 0;
	virtual string info() const = 0;

	virtual void setCedula(string) = 0;
	virtual void setNombre(string) = 0;
	virtual void setTelefono(string) = 0;
	virtual void setNacimiento(int, int, int) = 0;
	virtual void setEstado(char) = 0;


protected:
	string cedula;
	string nombre;
	string telefono;
	Fecha* nacimiento;
	DatosBiometricos* datos;
};
