#pragma once
#include <sstream>
using std::string;
class Grupo
{
public:
	Grupo(int);
	virtual ~Grupo();
	string toString();
	void incrementarCantidadMatriculados();
	int getCantidadMatriculados();
	int getNumero();
	int getCapacidad();
private:
	int numero;
	int capacidad;
	int cantidadMatriculados;

};

