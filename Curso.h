#pragma once
#include "Triatlonista.h"
#include "Lista.h"
#include "Grupo.h"
class Curso
{
public:
	Curso(string, char, Fecha*, int);
	virtual ~Curso();
	bool lleno();
	virtual void hacerReservacion(Triatlonista*);
	virtual void cancelacionReservacion(int,string);
	virtual void agregarGrupo(Grupo*);
	virtual string toString();
	virtual void setGrupo(Grupo*);

	static const int MAX = 10;
private:
	int cantidad;
	string descripcionCurso;
	char nivel;
	Fecha* fechaCurso;
	int horario;
	Grupo* g;
	Lista<Triatlonista>* reservaciones;
	Lista<Grupo>* grupos;

};
