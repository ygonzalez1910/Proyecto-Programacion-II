#include "Curso.h"
#include <sstream>
using std::stringstream;

Curso::Curso(string descripcionCurso, char nivel, Fecha* fechaCurso, int horario)
	:descripcionCurso(descripcionCurso),nivel(nivel),fechaCurso(fechaCurso),horario(horario),
	cupoMaximo(10), cantidad(0)
{
}

Curso::~Curso()
{
}

bool Curso::lleno()
{
	return cantidad == cupoMaximo;
}

void Curso::hacerReservacion(Triatlonista* triatlonista)
{
	if (lleno()) {
		
	}
	//no se como hacer que los nombres se agreguen a la lista
}

void Curso::cancelacion()
{
}
