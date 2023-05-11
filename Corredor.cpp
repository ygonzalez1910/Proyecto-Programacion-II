#include "Corredor.h"
#include <sstream>
using std::stringstream;

Corredor::Corredor(string cedula, string nombre, string telefono, Fecha* nacimiento, char sexo, double estatura)
	: Deportista(cedula, nombre, telefono, nacimiento), sexo(sexo), estatura(estatura),estado(true)
{
}

Corredor::~Corredor()
{
}

string Corredor::toString() const
{
	stringstream r;

	r << info();
	r << "Nombre: " << nombre << endl;
	r << "Cedula: " << cedula << endl;
	r << "Telefono: " << telefono << endl;
	r << "Nacimiento: " << nacimiento->toString() << endl;

	return r.str();
}

string Corredor::getcedula() const
{
	return cedula;
}

string Corredor::getnombre() const
{
	return nombre;
}

string Corredor::gettelefono() const
{
	return telefono;
}

Fecha* Corredor::getnacimiento() const
{
	return nacimiento;
}

string Corredor::info() const
{
	stringstream r;

	r << "Sexo: " << sexo << endl;
	r << "Estatura: " << estatura << endl;

	return r.str();
}

void Corredor::setCedula(string cedula)
{
	this->cedula = cedula;
}

void Corredor::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Corredor::setTelefono(string nombre)
{
	this->telefono = telefono;
}

void Corredor::setNacimiento(int dia, int mes, int anio)
{
	this->nacimiento = new Fecha(dia, mes, anio);
}

void Corredor::setEstado(char estado)
{
	this->estado = estado;
}
