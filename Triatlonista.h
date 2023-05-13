#pragma once
#include "DatosBiometricos.h"
#include "Corredor.h"
#include "Nadador.h"
#include "Ciclista.h"

class Triatlonista
{
public:
	Triatlonista(Corredor*, Nadador*, Ciclista*, int, int, bool);
	virtual ~Triatlonista();
	virtual string toString() const;

	virtual void setCedula(string);
	virtual void setNombre(string);
	virtual void setTelefono(string);
	virtual void setNacimiento(int, int, int);
	virtual void setEstado(bool);

	/*virtual void setCedulaOficial(string);
	virtual string getCedulaOficial();*/

	virtual string getCedula() const;
	virtual string getnombre() const;
	virtual string gettelefono() const;
	virtual Fecha* getnacimiento() const;

	virtual string info() const;
	//esto para actualizar los datos del cliente,
	virtual double getEstatura() const;
	virtual double getPeso() const;
	virtual double getPorcentajeGrasaCorporal() const;
	virtual double getPorcentajeMasaMuscular() const;

	//falta implementar estos en clase corredor,nadador,ciclista(esto en caso de que no se trabajará
	//con la clase datos biometricos)
	virtual void setDatosBiometricos(double,double,double,double);
private:
	Corredor* corredor;
	Nadador* nadador;
	Ciclista* ciclista;
	int triaGanados;
	int triaParticipados;
	bool estado;
	bool pago; 
	DatosBiometricos* datos;
};

