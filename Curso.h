#pragma once
#include "Triatlonista.h"
#include "Lista.h"
#include "Grupo.h"
class Curso
{
public:
	Curso(string, int,char, Fecha*,int,int);
	virtual ~Curso();
	bool lleno();
	virtual void hacerReservacion(Triatlonista*);
	virtual void cancelacionReservacion(int,string);
	virtual void agregarGrupo(Grupo*);
	virtual string toString() const;
	/*virtual void setFecha(int, int, int);*/
	virtual Fecha* getFecha() const;
	virtual void setGrupo(Grupo*);
	void incrementarCantidadMatriculados();
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
	Fecha* fechaCurso;
	Grupo* g;
	Lista<Triatlonista>* reservaciones;
	Lista<Grupo>* grupos;

};
