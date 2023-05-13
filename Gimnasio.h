#pragma once
#include "Triatlonista.h"
#include "Curso.h"
#include "Pagos.h"
class Gimnasio
{
public:
	void registroControlPagos(string,Pagos*,Fecha*); //recibe datos del cliente, monto a pagar y fecha del pago 
	//(implementar funcion dentro de la clase fecha que lo guarde)
	//virtual void agregarPago(Pagos*);

	//void registroYActualizacionCursos(Curso*);

	//void manejoReservaciones(Curso*); //no se si quiere trabajar con booleana para manejar si
	////el cliente quiere cancelar o hacer una

	//void actualizacionInformacionBasica(Triatlonista*,DatosBiometricos);//necesita obtener los datos de los dos elementos,
	//es decir, los de DatosBiometricos y los de Deportista, una opcion es solicitarlos asi, pero no se si funciona,
	//o intentar crear un segundo constructor en triatlonista con los datos biometricos y los datos generales
private:
	Lista<Pagos>* pagos;
	double montoPago;
	Triatlonista* triatlonista;
};

