#pragma once
#include <iostream>
using namespace std;
class DatosBiometricos
{
public:
	DatosBiometricos(double, double, double, double);
	virtual ~DatosBiometricos();
	virtual string toString() const;
private:
	double estatura;
	double peso;
	double porcentajeGrasaCorporal;
	double porcentajeMasaMuscular;

};
