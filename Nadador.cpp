#include "Nadador.h"
#include <sstream>

Nadador::Nadador(double masaMuscular, double peso, double porcentajeGrasaCorporal)
	: masaMuscular(masaMuscular), peso(peso), porcentajeGrasaCorporal(porcentajeGrasaCorporal)
{
}

Nadador::~Nadador()
{
}

string Nadador::toString()
{
	stringstream r;
	//ejemplo delegado
	r << datosBiometricos.toString();
	r << "Masa muscular: " << masaMuscular << endl;
	r << "Peso: " << peso << endl;
	r << "Porcentaje de grasa corporal: " << porcentajeGrasaCorporal << endl;
	return r.str();
}
