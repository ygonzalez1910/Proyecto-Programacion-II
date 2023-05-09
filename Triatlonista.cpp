#include "Triatlonista.h"
#include <sstream>

Triatlonista::Triatlonista(Corredor* corredor, Nadador* nadador, Ciclista* ciclista, 
int triaGanados, int triaParticipados, bool estado)
	: corredor(corredor), nadador(nadador),ciclista(ciclista),
	triaGanados(triaGanados), triaParticipados(triaParticipados),estado(estado),pago(false)
{
}


Triatlonista::~Triatlonista()
{
}



string Triatlonista::toString() const
{
	stringstream r;
	
	r << corredor->toString() << endl;
	r << ciclista->toString() << endl;
	r << nadador->toString() << endl;
	r << "Triatlones ganados: " << triaGanados << endl;
	r << "Triatlones participados: " << triaParticipados << endl;

	return r.str();
}

void Triatlonista::setCedula(string cedula)
{
	corredor->setCedula(cedula);
	nadador->setCedula(cedula);
	ciclista->setCedula(cedula);
}

void Triatlonista::setNombre(string nombre)
{
	corredor->setNombre(nombre);
	nadador->setNombre(nombre);
	ciclista->setNombre(nombre);
}

void Triatlonista::setTelefono(string telefono)
{
	corredor->setTelefono(telefono);
	nadador->setTelefono(telefono);
	ciclista->setTelefono(telefono);
}

void Triatlonista::setNacimiento(int dia, int mes, int ano)
{
	corredor->setNacimiento(dia, mes, ano);
	nadador->setNacimiento(dia, mes, ano);
	ciclista->setNacimiento(dia, mes, ano);
}

void Triatlonista::setEstado(bool)
{
}

string Triatlonista::getcedula() const
{
	return (corredor->getcedula() == ciclista->getcedula()) ? corredor->getcedula() : "No hay cedula valida.";
}
