#pragma once
#include <iostream>
using namespace std;
class DatosBiometricos
{
public:
	DatosBiometricos(double, double, double, double);
	virtual ~DatosBiometricos();
	virtual string toString() const;
	virtual double getEstatura() const;
	virtual double getPeso() const;
	virtual double getPorcentajeGrasaCorporal() const;
	virtual double getPorcentajeMasaMuscular() const;
private:
	double estatura;
	double peso;
	double porcentajeGrasaCorporal;
	double porcentajeMasaMuscular;

};
