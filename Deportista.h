#pragma once
#include "Fecha.h"
#include <iostream>
using namespace std;
class Deportista
{
public:
	Deportista(string, string, string, Fecha*,Fecha*); 
	virtual string toString();
	virtual ~Deportista();

protected:
	string cedula;
	string nombre;
	string numeroTelefono;
	Fecha* fechaNacimiento;
	Fecha* fechaRegistro;
};

