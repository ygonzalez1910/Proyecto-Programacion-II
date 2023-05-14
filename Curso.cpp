#include "Curso.h"
#include <sstream>
using std::stringstream;

const int Curso::MAX;

Curso::Curso(string descripcionCurso, int numero, char nivel, Fecha* fechaCurso, int capacidad,int cantidadMatriculados)
	:descripcionCurso(descripcionCurso), numero(numero), nivel(nivel), fechaCurso(fechaCurso)
	, capacidad(capacidad), cantidadMatriculados(cantidadMatriculados),tria(nullptr)
	,reservaciones(new Lista<Triatlonista>()), cantidad(0)
{
}

Curso::~Curso()
{
}
void Curso::setCantidadMatriculados(int cantidadMatriculados)
{
	this->cantidadMatriculados = cantidadMatriculados;
}
bool Curso::lleno(){
	return cantidadMatriculados == MAX;
}

void Curso::hacerReservacion(string cedula,int numeroCursoRecibido)
{
	IteradorLista<Triatlonista>* it;
	string mensaje = "El grupo ya se encuentra lleno...";
	
	//falta poder elegir el curso deseado

	if (!lleno()) {
		it = reservaciones->obtenerIterador();
		if (numeroCursoRecibido == numero && cedula == tria->getcedula()) {
			while (it->masElementos()) {
				tria = it->proximoElemento();
				reservaciones->agregar(tria);
				cantidadMatriculados++;
				cout << "Se ha matriculado exitosamente...\n";
			}
		}
		
	}
	else {
		throw mensaje;
	}
}

void Curso::cancelacionReservacion(string cedula)
{
	IteradorLista<Triatlonista>* it;
	
		it = reservaciones->obtenerIterador();
		while (it->masElementos()) {
			tria = it->proximoElemento();

			if (cedula == tria->getcedula()) {
				reservaciones->eliminar(tria);
				cantidadMatriculados--;
			}
		}

	
}

int Curso::getCantidadMatriculados()
{
	return cantidadMatriculados;
}

int Curso::getNumero()
{
	return numero;
}

int Curso::getCapacidad()
{
	return capacidad;
}

string Curso::toString() const
{
	stringstream r;
	r << "Descripcion del curso: " << descripcionCurso << "\n";
	r << "Numero de grupo: " << numero << "\n";
	r << "Nivel: " << nivel << "\n";
	r << "Fecha inicio: " << fechaCurso->toString() << "\n";
	cout << "Hola";
	r << "Capacidad: " << capacidad << "\n";
	r << "Cantidad de matriculados: " << cantidadMatriculados << "\n";
	if (reservaciones == nullptr) {
		r << "\nNo hay reservaciones realizadas...\n";
	}else{
		r << "Reservaciones realizadas: " << reservaciones << "\n";
	}
	return r.str();
}


Fecha* Curso::getFecha() const
{
	return fechaCurso;
}
