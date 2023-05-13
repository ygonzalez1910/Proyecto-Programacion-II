#include "Curso.h"
#include <sstream>
using std::stringstream;

const int Curso::MAX;

Curso::Curso(string descripcionCurso, int numero, char nivel, Fecha* fechaCurso, int capacidad, int cantidadMatriculados)
	:descripcionCurso(descripcionCurso), numero(numero), nivel(nivel), fechaCurso(fechaCurso), capacidad(capacidad),
	cantidadMatriculados(cantidadMatriculados),g(nullptr)
	,grupos(new Lista<Grupo>()),reservaciones(new Lista<Triatlonista>()), cantidad(0)
{
}

Curso::~Curso()
{
}

bool Curso::lleno()
{
	return g->getCantidadMatriculados() == MAX;
}

void Curso::hacerReservacion(Triatlonista* triatlonista)
{
	//hacer la funcion que reciba el numero de curso en que se quiere inscribir
	//primero se muestran los cursos y al final poner en esa misma opcion que eliga que curso con el numero
	//y despues agregarla a la lista de reservaciones para poder despues mostrarrla
	string mensaje = "El grupo ya se encuentra lleno...";

	if (!lleno()) {
		reservaciones->agregar(triatlonista);
		g->incrementarCantidadMatriculados();
	}
	else {
		throw mensaje;
	}
}
void Curso::cancelacionReservacion(int numeroGrupo, string cedula)
{
	//Grupo* aux;
	//for (int i = 0; i < MAX; i++) {
	//	if (numeroGrupo == g->getNumero() && cedula == t) {
	//		
	//	}
	//}
	//

}

void Curso::agregarGrupo(Grupo* g)
{
	grupos->agregar(g);
}
void Curso::incrementarCantidadMatriculados()
{
	cantidadMatriculados++;
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
	//r << "Grupos: " << g->toString() << "\n";
	//al entrar al string se cae porque nunca se llega a inicializar un grupo
	r << "Reservaciones realizadas: " << reservaciones << "\n";
	return r.str();
}
//
//void Curso::setFecha(int, int, int)
//{
//	this->fechaCurso = new Fecha(dia, mes, anio);
//}

Fecha* Curso::getFecha() const
{
	return fechaCurso;
}

void Curso::setGrupo(Grupo* a) {
	this->g = a;
}