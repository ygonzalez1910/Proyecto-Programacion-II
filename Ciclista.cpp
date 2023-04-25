#include "Ciclista.h"
#include <sstream>
Ciclista::Ciclista(Deportista* deportista, int horasEntrenamiento, double temPromedio)
	: Triatlonista(deportista), horasEntrenamiento(horasEntrenamiento), temPromedio(temPromedio)
{
}

Ciclista::~Ciclista()
{
}

string Ciclista::toString()
{
	stringstream r;
	r << "Datos biometricos: " << endl;
	r << datosBiometricos->toString();
	r << endl;
	r << "Horas de entrenamiento: " << horasEntrenamiento << endl;
	r << "Tempo promedio: " << temPromedio << endl;
	return r.str();
}
