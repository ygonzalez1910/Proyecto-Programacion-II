#include "Curso.h"
#include <sstream>
using std::stringstream;

Curso::Curso(string descripcionCurso, char nivel, Fecha* fechaCurso, int horario, int cupoMaximo)
	:descripcionCurso(descripcionCurso),nivel(nivel),fechaCurso(fechaCurso),horario(horario),
	cupoMaximo(cupoMaximo)
{
}

Curso::~Curso()
{
}

int Curso::setCupoMaximo(int cupoMaximo)
{
	return cupoMaximo = cupoMaximo;
}

void Curso::hacerReservacion(Triatlonista triatlonista)
{
	//no se como hacer que los nombres se agreguen a la lista
}
