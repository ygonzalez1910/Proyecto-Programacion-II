#pragma once
#include <iostream>
using namespace std;

class Fecha
{
public:
	Fecha(int=0, int=0, int=0);
	virtual ~Fecha();
	//string sacarEdad();

	virtual void setDia(int);
	virtual void setMes(int);
	virtual void setAnio(int);

	virtual string toStringFechaActual();

private:
	int dia;
	int mes;
	int anio;
};

