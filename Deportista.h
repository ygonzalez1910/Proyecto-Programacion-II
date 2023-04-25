#pragma once
#include "Fecha.h"
#include <iostream>
using namespace std;
class Deportista
{
public:
	Deportista(string, string, string, Fecha*,Fecha*); //aqui estaba la clase fecha 
	//pero usted dijo que la eliminaramos, aunque creo que es mejor trabajar con Fecha
	//que con ManejoSimpleFecha
	virtual string toString();
	virtual ~Deportista();
protected:
	string cedula;
	string nombre;
	string numeroTelefono;
	Fecha* fechaNacimiento;
	Fecha* fechaRegistro;
};

