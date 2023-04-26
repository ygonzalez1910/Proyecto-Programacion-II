#pragma once
#include "Triatlonista.h"
#include "Lista.h"
class Curso
{
public:
	Curso(string, char, Fecha*, int);
	virtual ~Curso();
	bool lleno();
	void hacerReservacion(Triatlonista*);
	void cancelacion();
	// no se si debe ser puntero o no, si no es puntero, deportista deja de ser una clase abstracta porque Triatlonista hereda de ella 
	//tiene que ser puntero porque se necesita ese objeto especifico
private:
	string descripcionCurso;
	char nivel;
	Fecha* fechaCurso;
	int horario;
	int cupoMaximo;
	int cantidad;
};

