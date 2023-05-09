#pragma once
#include <iostream>
using namespace std;

class Fecha
{
public:
	Fecha(int, int, int);
	virtual ~Fecha();
	string sacarEdad();
	int setFechaRegistro(int,int,int);
	string toStringFechaActual();
private:
	int diaActual;
	int mesActual;
	int anioActual;
	int diaRegistro;
	int mesRegistro;
	int anioRegistro;
};

