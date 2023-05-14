#pragma once
#include <iostream>
using namespace std;
#include <string>
class Fecha
{
public:
	Fecha(int=0, int=0, int=0);
	virtual ~Fecha();

	virtual void setDia(int);
	virtual void setMes(int);
	virtual void setAnio(int);

	virtual int getDia();
	virtual int getMes();
	virtual int getAnio();
	virtual string FechaActual();
	virtual string toString();
	static Fecha* convertirFecha(string fecha_str);
	virtual int edad();
	
private:
	int dia;
	int mes;
	int anio;
	//int dA;
	//int mA;
	//int aA;
};

