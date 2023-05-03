#pragma once

#include "Lista.h"
#include ""

class Menu
{
public:
	Menu();
	virtual ~Menu();
	virtual void menuPrincipal();
	virtual void iniciar();

private:
	int opcion;
	Lista<Cliente>* clientes;

};

