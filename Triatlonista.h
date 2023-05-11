#pragma once
#include "DatosBiometricos.h"
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
	virtual void setNacimiento(int,int,int);
	virtual void setEstado(bool);

	virtual string getcedula() const;
	virtual string getnombre() const;
	virtual string gettelefono() const;
	virtual Fecha* getnacimiento() const;
	virtual string info() const;

private:
	Corredor* corredor;
	Nadador* nadador;
	Ciclista* ciclista;
	int triaGanados;
	int triaParticipados;
	bool estado;
	bool pago; 
};

