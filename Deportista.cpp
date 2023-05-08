#include "Deportista.h"
#include <sstream>
using std::stringstream;

Deportista::Deportista(string cedula, string nombre, string telefono, Fecha* nacimiento)
	:cedula(cedula),nombre(nombre),telefono(telefono),nacimiento(nacimiento)
{
}

string Deportista::toString() const
{
	stringstream r;

	r << "Cedula: " << getcedula() << endl;
	r << "Nombre: " << getnombre() << endl;
	r << "Telefono: " << gettelefono() << endl;
	r << "Fecha nacimiento: " << getnacimiento() << endl;
	r << "Info adicional: " << infoAdi() << endl;

	return r.str();
}
