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

	virtual void setCedula(string);
	virtual void setNombre(string);
	virtual void setTelefono(string);
	virtual void setNacimiento(int, int, int);
	virtual void setEstado(char);

protected:
	string cedula;
	string nombre;
	string telefono;
	Fecha* nacimiento;
	int horasEntrenamiento;
	double temPromedio;
	char estado;
};

