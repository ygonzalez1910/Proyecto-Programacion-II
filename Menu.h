#pragma once

#include "Lista.h"
#include "Triatlonista.h"

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

};

