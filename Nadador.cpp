#include "Nadador.h"
#include <sstream>
Nadador::Nadador(Deportista* deportista)
	: Triatlonista(deportista)
{
}

Nadador::~Nadador()
{
}

string Nadador::toString()
{
	stringstream r;
	r << datosBiometricos->toString();
	return r.str();
}
