#pragma once
#include "Triatlonista.h"
#include "Lista.h"
#include "Grupo.h"
class Curso
{
public:
	Curso(string, int, char, Fecha*, int);
	virtual ~Curso();
	bool lleno();
	virtual void hacerReservacion(string);
	virtual void cancelacionReservacion(string);
	
	virtual string toString() const;

	virtual Fecha* getFecha() const;

	
	int getCantidadMatriculados();
	int getNumero();
	int getCapacidad();
	static const int MAX = 10;

private:
	int cantidad;
	string descripcionCurso;
	char nivel;
	int numero;
	int capacidad;
	int cantidadMatriculados;
	Triatlonista* tria;
	Fecha* fechaCurso;
	Lista<Triatlonista>* reservaciones;


};
