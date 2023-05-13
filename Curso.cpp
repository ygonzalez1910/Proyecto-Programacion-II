#include "Curso.h"
#include <sstream>
using std::stringstream;

const int Curso::MAX;

Curso::Curso(string descripcionCurso, char nivel, Fecha* fechaCurso)
	:descripcionCurso(descripcionCurso),nivel(nivel),fechaCurso(fechaCurso),g(nullptr)
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
	// necesitamos tener un numero de reservacion para que se pueda realizar la cancelacionde la misma,
	// como le indico el numero de reservacion sin usar cout
	// el numero de reservacion lo podemos dar con una funcion de numero aleatorio
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

string Curso::toString()
{
	stringstream r;
	r << "Descripcion del curso: " << descripcionCurso << "\n";
	r << "Nivel: " << nivel << "\n";
	r << "Fecha inicio: " << fechaCurso << "\n";
	r << "Grupos: " << "\n";
	r << "Reservaciones realizadas: " << reservaciones << "\n";
	return r.str();
}

void Curso::setGrupo(Grupo* a) {
	this->g = a;
}