#include "Corredor.h"
#include <sstream>
using std::stringstream;

Corredor::Corredor(string cedula, string nombre, string telefono, Fecha* nacimiento, char sexo, double estatura)
	: Deportista(cedula, nombre, telefono, nacimiento), sexo(sexo), estatura(estatura)
{
}

Corredor::~Corredor()
{
}

string Corredor::toString() const
{
	stringstream r;

	r << "Sexo: " << sexo << endl;
	r << "Estatura: " << estatura << endl;
	return r.str();
}
