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
	virtual void cancelacionReservacion();
	virtual void agregarGrupo(Grupo*);
	virtual string toString();
private:
	string descripcionCurso;
	char nivel;
	Fecha* fechaCurso;
	int horario;
	Grupo* grupos;
	Lista<Triatlonista>* listaReservaciones;
	Lista<Grupo>* listaGrupo;

};
