#include "Grupo.h"
#include <sstream>
using std::stringstream;

Grupo::Grupo(int numero)
	: numero(numero),capacidad(20),cantidadMatriculados(0)
{
}

Grupo::~Grupo()
{
}

string Grupo::toString()
{
	stringstream r;
	r << "Numero de grupo: " << numero << "\n";
	r << "Capacidad: " << capacidad << "\n";
	r << "Cantidad matriculados: " << cantidadMatriculados << "\n";
	return r.str();
}

void Grupo::incrementarCantidadMatriculados()
{
	cantidadMatriculados++;
}

int Grupo::getCantidadMatriculados()
{
	return cantidadMatriculados;
}

int Grupo::getNumero()
{
	return numero;
}

int Grupo::getCapacidad()
{
	return capacidad;
}
