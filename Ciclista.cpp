#include "Ciclista.h"
#include <sstream>
using std::stringstream;

Ciclista::Ciclista(string cedula, string nombre, string telefono, Fecha* nacimiento,
	int horasEntrenamiento, double temPromedio)
	:Deportista(cedula, nombre, telefono, nacimiento),
	horasEntrenamiento(horasEntrenamiento), temPromedio(temPromedio)
{
}

Ciclista::~Ciclista()
{
}

string Ciclista::getcedula() const
{
	return cedula;
}

string Ciclista::getnombre() const
{
	return nombre;
}

string Ciclista::gettelefono() const
{
	return telefono;
}

Fecha* Ciclista::getnacimiento() const
{
	return nacimiento;
}

string Ciclista::infoAdi() const
{
	return info();
}

string Ciclista::info() const
{
	stringstream r;

	r << "Horas de entrenamiento: " << horasEntrenamiento << endl;
	r << "Temp promedio: " << temPromedio << endl;

	return r.str();
}


string Ciclista::toString() const
{
	stringstream r;
	r << info();
	r << "Horas de entrenamiento: " << horasEntrenamiento << endl;
	r << "Tempo promedio: " << temPromedio << endl;
	return r.str();
}