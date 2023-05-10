#include "Nadador.h"
#include <sstream>

Nadador::Nadador(string cedula, string nombre, string telefono, Fecha* nacimiento
	, double masaMuscular, double peso, double porcentajeGrasaCorporal)
	:Deportista(cedula, nombre, telefono, nacimiento),
	masaMuscular(masaMuscular), peso(peso),
	porcentajeGrasaCorporal(porcentajeGrasaCorporal),estado(estado) {
}

Nadador::~Nadador()
{
}


string Nadador::getcedula() const
{
	return cedula;
}

string Nadador::getnombre() const
{
	
	return nombre;
}

string Nadador::gettelefono() const
{
	return telefono;
}

Fecha* Nadador::getnacimiento() const
{
	return nacimiento;
}


string Nadador::info() const
{
	stringstream r;

	r << "Masa muscular: " << masaMuscular << endl;
	r << "Peso: " << peso << endl;
	r << "Porcentaje de grasa corporal: " << porcentajeGrasaCorporal << endl;

	return r.str();
}

void Nadador::setCedula(string cedula)
{
	this->cedula = cedula;
}

void Nadador::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Nadador::setTelefono(string telefono)
{
	this->telefono = telefono;
}

void Nadador::setNacimiento(int dia, int mes, int ano)
{
	this->nacimiento = new Fecha(dia, mes, ano);
}

void Nadador::setEstado(char estado)
{
	this->estado = estado;
}


string Nadador::toString()
{
	stringstream r;
	
	r << info();
	r << "Masa muscular: " << masaMuscular << endl;
	r << "Peso: " << peso << endl;
	r << "Porcentaje de grasa corporal: " << porcentajeGrasaCorporal << endl;

	return r.str();
}
