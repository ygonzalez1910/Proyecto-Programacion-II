#include "Ciclista.h"
#include <sstream>
using std::stringstream;

Ciclista::Ciclista(string cedula, string nombre, string telefono, Fecha* nacimiento,
	int horasEntrenamiento, double temPromedio)
	:Deportista(cedula, nombre, telefono, nacimiento),
	horasEntrenamiento(horasEntrenamiento), temPromedio(temPromedio),estado(true),nacimiento(nacimiento)
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


string Ciclista::info() const
{
	stringstream r;

	r << "Horas de entrenamiento: " << horasEntrenamiento << endl;
	r << "Temp promedio: " << temPromedio << endl;

	return r.str();
}

void Ciclista::setCedula(string c)
{
	this-> cedula = c;
}

void Ciclista::setNombre(string n)
{
	this->nombre = n;
}

void Ciclista::setTelefono(string t)
{
	this->telefono = t;
}

void Ciclista::setNacimiento(int dia, int mes, int anio)
{
	this->nacimiento = new Fecha(dia, mes, anio);
}

void Ciclista::setEstado(char estado)
{
	this->estado = estado;
}


string Ciclista::toString() const
{
	stringstream r;

	r << "Datos como ciclista: " << endl << info();

	return r.str();
}