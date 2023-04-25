#include "Triatlonista.h"
#include <sstream>

Triatlonista::Triatlonista(string cedula, string nombre, string numeroTelefono, Fecha* fechaNacimiento, Fecha*,int cantidadParticipacionesEnIronMan, int cantidadTriatlonesGanados)
	:cantidadParticipacionesEnIronMan(cantidadParticipacionesEnIronMan), cantidadTriatlonesGanados(cantidadTriatlonesGanados),
	Deportista(cedula, nombre, numeroTelefono, fechaNacimiento, fechaRegistro)
{
}

Triatlonista::~Triatlonista()
{
}



string Triatlonista::toString()
{
	stringstream r;
	r << "Cantidad de participaciones en ironman: " << cantidadParticipacionesEnIronMan << endl;
	r << "Cantidad dr Triatlones ganados: " << cantidadTriatlonesGanados << endl;
	return r.str();
}
