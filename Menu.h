#pragma once

#include "Lista.h"
#include "Triatlonista.h"
#include "Grupo.h"
#include "Curso.h"

class Menu
{
public:
	Menu();
	virtual ~Menu();
	virtual void menuPrincipal();
	virtual void iniciar();
	virtual string miniMenu();
private:
	int opcion;
	Lista<Triatlonista>* triatlonistas;
	Lista<Curso>* cursos;
	Lista<Grupo>* grupos;
	Lista<Fecha>* fechas;

};

