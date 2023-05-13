#include "Gimnasio.h"


void Gimnasio::registroControlPagos(string cedula, Pagos* pago, Fecha* fecha)
{
	string mensaje = "Cedula no encontrada en el sistema";
	if (cedula == triatlonista->getcedula()) {
		pagos->agregar(pago);
	}
	else {
		throw mensaje;
	}

}

//creo que este metodo ya no sería necesario
//void Gimnasio::agregarPago(Pagos* p)
//{
//	pagos->agregar(p);
//}

