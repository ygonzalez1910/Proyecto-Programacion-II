#include "Triatlonista.h"
#include <sstream>

Triatlonista::Triatlonista(int cantiParticEnIronMan, int cantTriatGanados, DatosBiometricos* datos)
	:cantiParticEnIronMan(cantiParticEnIronMan), cantTriatGanados(cantTriatGanados),datos(NULL),
	Deportista(cedula, nombre, numeroTelefono, fechaNacimiento)
{
}

Triatlonista::~Triatlonista()
{
}



string Triatlonista::toString()
{
	stringstream r;
	r << "Cantidad de participaciones en ironman: " << cantiParticEnIronMan << endl;
	r << "Cantidad dr Triatlones ganados: " << cantTriatGanados << endl;
	return r.str();
}
