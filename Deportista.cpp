#include "Deportista.h"
#include <sstream>
using std::stringstream;

Deportista::Deportista(string cedula, string nombre, string telefono, Fecha* nacimiento)
	:cedula(cedula),nombre(nombre),telefono(telefono),nacimiento(nacimiento),datos(nullptr)
{
}

string Deportista::toString() const
{
	stringstream r;

	r << "Cedula: " << cedula << endl;
	r << "Nombre: " << nombre << endl;
	r << "Telefono: " << telefono << endl;
	r << "Fecha nacimiento: " << nacimiento << endl;

	return r.str();
}
