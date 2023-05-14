#include "Triatlonista.h"
#include <sstream>
#include <fstream>
#include <iostream>

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
	corredor->setCedula(cedula);
	nadador->setCedula(cedula);
	ciclista->setCedula(cedula);
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
	return corredor->getcedula();
}

string Triatlonista::getnombre() const
{
	return corredor->getnombre();
}

string Triatlonista::gettelefono() const
{
	return corredor->gettelefono();
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

Corredor* Triatlonista::getCorredor() {
	return corredor;
}

Ciclista* Triatlonista::getCiclista()
{
	return ciclista;
}

Nadador* Triatlonista::getNadador()
{
	return nadador;
}

void Triatlonista::setParticipados(int participados)
{
	this->triaParticipados = participados;
}

void Triatlonista::setGanados(int ganados)
{
	this->triaGanados = ganados;
}

void Triatlonista::procesarArchivos()
{
	fstream entrada("../Triatlonistas.txt", ios::in);
	fstream errores("../errores.txt", ios::out);

	string valor1, valor2, valor3, descripcion;
	Fecha* valor1_1;
	double valor2_2;
	string valor3_3;
	Nadador* nadador = NULL;
	Ciclista* ciclista = NULL;
	Corredor* corredor = NULL;
	while (entrada.good()) {
		getline(entrada, descripcion, '\t');

		if (!descripcion.empty()) {
			getline(entrada, valor1, '\t');
			getline(entrada, valor2, '\n');
			getline(entrada, valor3, '\n');

			try {
				string mensaje = "error de acceso al archivo";
				if (!entrada.good()) {
					throw mensaje;
				}
			}
			catch (string error) {
				errores << "error file: " << error << "\n";
			}

			try {

				/*(string cedula, string nombre, string telefono, Fecha * nacimiento
					, double masaMuscular, double peso, double porcentajeGrasaCorporal)*/
				valor1_1 = convertirFecha(valor1);
				valor2_2 = convertirDouble(valor2);
				valor3_3 = convertirString(valor3);
				if (descripcion == "Triatlonista") {
					nadador = new Nadador(valor3_3,valor3_3,valor3_3,valor1_1,valor2_2,valor2_2,valor2_2);
				}
				/*else if (descripcion == "rectangulo") {
					f = new Rectangulo(valor1_1, valor2_2);
				}
				else {
					string noTipo = "no es figura";
					throw noTipo;
				}
				cout << "Area: " << f->calcularArea() << "\n";*/
			}
			catch (int errorInt) {
				errores << "error int: " << errorInt << "\n";
			}
			catch (double errorDouble) {
				errores << "error double: " << errorDouble << "\n";
			}
			catch (string errorTipo) {
				errores << "error tipo figura: " << errorTipo << "\n";
			}
		}
	}
	entrada.close();
	errores.close();
}

Fecha* Triatlonista::convertirFecha(string s)
{
	stringstream r;
	Fecha* valor;
	r << s;
	if (!(r >> valor)) {
		throw - 1;
	}
	return valor;
}

double Triatlonista::convertirDouble(string s)
{
	stringstream r;
	double valor;
	r << s;
	if (!(r >> valor)) {
		throw 1.25;
	}
	return valor;
}

string Triatlonista::convertirString(string s)
{
	stringstream r;
	string valor;
	r << s;
	if (!(r >> valor)) {
		throw 1.25;
	}
	return valor;
}
