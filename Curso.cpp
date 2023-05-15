#include "Curso.h"
#include <sstream>
using std::stringstream;

const int Curso::MAX;

Curso::Curso(string descripcionCurso, int numero, char nivel, Fecha* fechaCurso, int capacidad)
	:descripcionCurso(descripcionCurso), numero(numero), nivel(nivel), fechaCurso(fechaCurso)
	, capacidad(capacidad), tria(nullptr), cantidadMatriculados(0)
	,reservaciones(new Lista<Triatlonista>()),cantidad(0)
{
}

Curso::~Curso()
{
}

bool Curso::lleno(){
	return cantidadMatriculados == MAX;
}

void Curso::hacerReservacion(Triatlonista* triatlonista)
{
	IteradorLista<Triatlonista>* it;
	string mensaje = "El grupo ya se encuentra lleno...";
	
	//falta poder elegir el curso deseado

	if (!lleno()) {
		reservaciones->agregar(triatlonista);
		cantidadMatriculados++;
		/*it = reservaciones->obtenerIterador();
		while (it->masElementos()) {
			tria = it->proximoElemento();
			if (cedula == tria->getcedula()) {
				reservaciones->agregar(tria);
				cantidadMatriculados++;
			}
		}*/
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
	r << "Capacidad: " << capacidad << "\n";
	r << "Cantidad de matriculados: " << cantidadMatriculados << "\n";

	//r << "Reservaciones realizadas: " << reservaciones << "\n";
	return r.str();
}

string Curso::toStringReservaciones()
{
	stringstream r;
	//iterador de lista reservaciones
	//IteradorLista<Triatlonista>* itr;
	//itr = new IteradorLista<Triatlonista>(Triatlonista);
	r << "Descripcion del curso: " << descripcionCurso << "\n";
	itr = reservaciones->obtenerIterador();

	Triatlonista* temp;
	while (itr->masElementos()) {
		temp = itr->proximoElemento();
		r << "\nReservaciones realizadas: " << temp->toString();
	}
	return r.str();
}

Fecha* Curso::getFecha() const
{
	return fechaCurso;
}
