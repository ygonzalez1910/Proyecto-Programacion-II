#include "Deportista.h"
#include <sstream>
using std::stringstream;


Deportista::Deportista(string cedula, string nombre, string numeroTelefono, Fecha* fechaNacimiento, Fecha* fechaRegistro)
	:cedula(cedula), nombre(nombre), numeroTelefono(numeroTelefono), fechaNacimiento(fechaNacimiento), fechaRegistro(fechaRegistro)
{
}

Deportista::~Deportista()
{
}

string Deportista::toString()
{
	stringstream r;
	r << "Cedula: " << cedula << endl;
	r << "Nombre: " << nombre << endl;
	r << "Numero de telefono: " << numeroTelefono << endl;
	r << "Fecha Nacimiento: " << fechaNacimiento << endl;
	return r.str();
}
