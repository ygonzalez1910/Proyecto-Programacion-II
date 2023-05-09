#include "Curso.h"
#include <sstream>
using std::stringstream;

Curso::Curso(string descripcionCurso, char nivel, Fecha* fechaCurso, int horario)
	:descripcionCurso(descripcionCurso),nivel(nivel),fechaCurso(fechaCurso),horario(horario)
	//,grupos(new Lista<Grupo>())

{
}

Curso::~Curso()
{
	delete grupos;
}

bool Curso::lleno()
{
	return grupos->getCantidadMatriculados() == grupos->getCapacidad();
}

void Curso::hacerReservacion(Triatlonista* triatlonista)
{
	// necesitamos tener un numero de reservacion para que se pueda realizar la cancelacionde la misma,
	// como le indico el numero de reservacion sin usar cout
	// el numero de reservacion lo podemos dar con una funcion de numero aleatorio
	string mensaje = "El grupo ya se encuentra lleno...";

	if (!lleno()) {
		listaReservaciones->agregar(triatlonista);
	}
	else {
		throw mensaje;
	}
}
void Curso::cancelacionReservacion()
{

}

void Curso::agregarGrupo(Grupo* grupos)
{
	listaGrupo->agregar(grupos);
}

string Curso::toString()
{
	stringstream r;
	r << "Descripcion del curso: " << descripcionCurso << "\n";
	r << "Nivel: " << nivel << "\n";
	r << "Fecha: " << fechaCurso << "\n";
	r << "Horario: " << horario << "\n";
	r << "Grupos: " << listaGrupo << "\n";
	r << "Reservaciones realizadas: " << listaReservaciones << "\n";
	return r.str();
}
