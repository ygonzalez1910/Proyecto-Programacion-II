#pragma once
#include "Fecha.h"
#include "ObjetoBase.h"
#include <iostream>
using namespace std;

class Deportista : public ObjetoBase
{
public:

	virtual string toString() const;
	virtual string cedula() const = 0;
	virtual string nombre() const = 0;
	virtual string telefono() const = 0;
	virtual Fecha* nacimiento() const = 0;
	virtual string infoAdi() const = 0;

};

