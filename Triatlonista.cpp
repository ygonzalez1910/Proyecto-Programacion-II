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
	cedula = cedula;
}

void Triatlonista::setNombre(string nombre)
{
	nombre = nombre;
}

void Triatlonista::setTelefono(string telefono)
{
	telefono = telefono;
}

void Triatlonista::setNacimiento(Fecha* nacimiento)
{
	nacimiento = nacimiento;
}

void Triatlonista::setEstado(bool e)
{
	if (!e) {
		estado = e;
	}
	else if(e) {
		estado = e;
	}
	else {
		throw invalid_argument("Tipo de estado no admitido.");
	}
}
