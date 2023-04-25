#include "Triatlonista.h"
#include <sstream>

Triatlonista::Triatlonista(int cantidadParticipacionesEnIronMan, int cantidadTriatlonesGanados)
	:cantidadParticipacionesEnIronMan(cantidadParticipacionesEnIronMan), cantidadTriatlonesGanados(cantidadTriatlonesGanados),
	Deportista(cedula, nombre, numeroTelefono, fechaNacimiento)
{
}

Triatlonista::~Triatlonista()
{
}

string Triatlonista::toStringDatosGenerales() const
{
	stringstream r;
	r << "Cedula: " << cedula << endl;
	r << "Nombre: " << nombre << endl;
	r << "Numero de telefono: " << numeroTelefono << endl;
	r << "Fecha Nacimiento: " << fechaNacimiento << endl;
	return r.str();
}

string Triatlonista::toString()
{
	stringstream r;
	r << "Cantidad de participaciones en ironman: " << cantidadParticipacionesEnIronMan << endl;
	r << "Cantidad dr Triatlones ganados: " << cantidadTriatlonesGanados << endl;
	return r.str();
}
