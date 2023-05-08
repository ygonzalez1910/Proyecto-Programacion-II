#include "Nadador.h"
#include <sstream>

Nadador::Nadador(string cedula, string nombre, string telefono, Fecha* nacimiento
	, double masaMuscular, double peso, double porcentajeGrasaCorporal)
	:Deportista(cedula, nombre, telefono, nacimiento),
	masaMuscular(masaMuscular), peso(peso),
	porcentajeGrasaCorporal(porcentajeGrasaCorporal){
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


string Nadador::toString()
{
	stringstream r;
	
	r << info();
	r << "Masa muscular: " << masaMuscular << endl;
	r << "Peso: " << peso << endl;
	r << "Porcentaje de grasa corporal: " << porcentajeGrasaCorporal << endl;

	return r.str();
}
