#pragma once
#include "Deportista.h"
using namespace std;
#include <iostream>
class Triatlonista : public Deportista
{
public:
	Triatlonista(int, int);
	~Triatlonista();
	virtual string toStringDatosGenerales() const;
	string toString();
protected:
	Triatlonista(Deportista*);
private:
	int cantidadParticipacionesEnIronMan;
	int cantidadTriatlonesGanados;
};

