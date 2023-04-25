#pragma once
#include "Triatlonista.h"
#include "Lista.h"
class Curso
{
public:
	Curso(string, char, Fecha*, int, int);
	virtual ~Curso();
	int setCupoMaximo(int);
	void hacerReservacion(Triatlonista); // no se si debe ser puntero o no, si no es puntero, deportista deja de ser una clase abstracta porque Triatlonista hereda de ella 
private:
	string descripcionCurso;
	char nivel;
	Fecha* fechaCurso;
	int horario;
	int cupoMaximo;
};

