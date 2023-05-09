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

private:
	int opcion;
	Lista<Triatlonista>* triatlonistas;
	Lista<Grupo>* grupos;

};

