#include "DatosBiometricos.h"
#include <sstream>
using std::stringstream;
DatosBiometricos::DatosBiometricos(double estatura, double peso, double porcentajeGrasaCorporal, double porcentajeMasaMuscular)
	:estatura(estatura), peso(peso), porcentajeGrasaCorporal(porcentajeGrasaCorporal), porcentajeMasaMuscular(porcentajeMasaMuscular)
{
}

DatosBiometricos::~DatosBiometricos()
{
}

string DatosBiometricos::toString() const
{
	stringstream r;
	r << "Estatura: " << estatura << endl;
	r << "Peso: " << peso << endl;
	r << "Porcentaje Grasa: " << porcentajeGrasaCorporal << endl;
	r << "Porcentaje Masa Muscular: " << porcentajeMasaMuscular << endl;
	return r.str();
}
