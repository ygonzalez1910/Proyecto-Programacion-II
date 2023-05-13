#include "Triatlonista.h"
#include <sstream>

Triatlonista::Triatlonista(Corredor* corredor, Nadador* nadador, Ciclista* ciclista, 
int triaGanados, int triaParticipados, bool estado)
	: corredor(corredor), nadador(nadador), ciclista(ciclista),
	triaGanados(triaGanados), triaParticipados(triaParticipados),estado(estado),pago(false),datos(nullptr) {

}


Triatlonista::~Triatlonista()
{
}



string Triatlonista::toString() const
{
	stringstream r;
	
	r << corredor->toString() << "\n";
	r << ciclista->toString() << "\n";
	r << nadador->toString() << "\n";
	r << "Datos como triatlonista: " << endl;
	r << "Triatlones ganados: " << triaGanados << "\n";
	r << "Triatlones participados: " << triaParticipados << "\n";
	return r.str();
}

void Triatlonista::setCedula(string cedula)
{
	corredor->setCedula(cedula),nadador->setCedula(cedula),ciclista->setCedula(cedula);
}

void Triatlonista::setNombre(string nombre)
{
	corredor->setNombre(nombre);
	nadador->setNombre(nombre);
	ciclista->setNombre(nombre);
}

void Triatlonista::setTelefono(string telefono)
{
	corredor->setTelefono(telefono);
	nadador->setTelefono(telefono);
	ciclista->setTelefono(telefono);
}

void Triatlonista::setNacimiento(int dia, int mes, int ano)
{
	corredor->setNacimiento(dia, mes, ano);
	nadador->setNacimiento(dia, mes, ano);
	ciclista->setNacimiento(dia, mes, ano);
}

void Triatlonista::setEstado(bool estado)
{
	this->estado = estado;
}


string Triatlonista::getcedula() const
{
	return corredor->getcedula(),nadador->getcedula(),ciclista->getcedula();
}

string Triatlonista::getCedula() const
{
	return cedula;
}

string Triatlonista::getnombre() const
{
	return (corredor->getnombre() == ciclista->getnombre()) ? corredor->getnombre() : "No hay nombre valido.";
}

string Triatlonista::gettelefono() const
{
	return (corredor->gettelefono() == ciclista->gettelefono()) ? corredor->gettelefono() : "No hay telefono valido.";
}

Fecha* Triatlonista::getnacimiento() const
{
	Fecha* fecha = nullptr;

	if ((corredor->getnacimiento() == ciclista->getnacimiento()) && nadador->getnacimiento()) {
		fecha = corredor->getnacimiento();
	}

	return fecha;
}

string Triatlonista::info() const
{
	return string();
}

double Triatlonista::getEstatura() const
{
	double estatura = datos->getEstatura();
	return estatura;
}

double Triatlonista::getPeso() const
{
	double peso = datos->getPeso();
	return peso;
}

double Triatlonista::getPorcentajeGrasaCorporal() const
{
	double porcentajeGrasaCorporal = datos->getPorcentajeGrasaCorporal();
	return porcentajeGrasaCorporal;
}

double Triatlonista::getPorcentajeMasaMuscular() const
{
	double porcentajeMasaMuscular = datos->getPorcentajeMasaMuscular();
	return porcentajeMasaMuscular;
}

void Triatlonista::setDatosBiometricos(double estatura, double peso,double porcentajeGrasaCorporal,double porcentajeMasaMuscular)
{
	datos = new DatosBiometricos(estatura, peso, porcentajeGrasaCorporal, porcentajeMasaMuscular);
}


