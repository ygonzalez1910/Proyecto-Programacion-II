#pragma once
#include "Triatlonista.h"
#include "Curso.h"
class Gimnasio
{
public:
	void registroClientesNuevos(Triatlonista); // no se cuando usar punteros o delegacion de clases
	//si uso delegacion los puedo guardar en la lista generica?

	void registroControlPagos(Triatlonista,double,Fecha); //recibe datos del cliente, monto a pagar y fecha del pago 
	//(implementar funcion dentro de la clase fecha que lo guarde)

	void registroYActualizacionCursos(Curso);

	void manejoReservaciones(Curso); //no se si quiere trabajar con booleana para manejar si
	//el cliente quiere cancelar o hacer una

	void actualizacionInformacionBasica(Deportista,DatosBiometricos);//necesita obtener los datos de los dos elementos,
	//es decir, los de DatosBiometricos y los de Deportista, una opcion es solicitarlos asi, pero no se si funciona,
	//o intentar crear un segundo constructor en triatlonista con los datos biometricos y los datos generales
private:
	double montoPago;
};

