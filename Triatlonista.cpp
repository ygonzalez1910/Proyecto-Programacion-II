#include "Triatlonista.h"
#include <sstream>

Triatlonista::Triatlonista(int cantiParticEnIronMan, int cantTriatGanados, DatosBiometricos* datos)
	:cantiParticEnIronMan(cantiParticEnIronMan), cantTriatGanados(cantTriatGanados),datos(NULL),
	Deportista(cedula, nombre, numeroTelefono, fechaNacimiento, fechaRegistro)
{
}


Triatlonista::~Triatlonista()
{
}



string Triatlonista::toString() const
{
	stringstream r;
	
	r << corredor->toString() << endl;
	r << ciclista->toString() << endl;
	r << nadador->toString() << endl;
	r << "Triatlones ganados: " << triaGanados << endl;
	r << "Triatlones participados: " << triaParticipados << endl;

	return r.str();
}
