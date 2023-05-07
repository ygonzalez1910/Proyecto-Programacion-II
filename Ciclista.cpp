#include "Ciclista.h"
#include <sstream>
using std::stringstream;

Ciclista::Ciclista(string cedula, string nombre, string telefono, Fecha* nacimiento,
	int horasEntrenamiento, double temPromedio)
	:cedula(cedula),nombre(nombre),telefono(telefono),nacimiento(nacimiento),
	horasEntrenamiento(horasEntrenamiento), temPromedio(temPromedio)
{
}

Ciclista::~Ciclista()
{
}

string Ciclista::toString() const
{
	stringstream r;
	r << "Horas de entrenamiento: " << horasEntrenamiento << endl;
	r << "Tempo promedio: " << temPromedio << endl;
	return r.str();
}

string Ciclista::cedula() const
{
	return cedula;
}

string Ciclista::nombre() const
{
	return nombre;
}

string Ciclista::telefono() const
{
	return telefono;
}

Fecha* Ciclista::nacimiento() const
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
