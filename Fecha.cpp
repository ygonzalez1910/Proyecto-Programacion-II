#include "Fecha.h"
#include <ctime>
#include <sstream>
using std::stringstream;

Fecha::Fecha(int dia, int mes, int anio)
    :dia(dia), mes(mes), anio(anio)
{
}

Fecha::~Fecha()
{
}


void Fecha::setDia(int dia)
{
    this->dia = dia;
}

void Fecha::setMes(int mes)
{
    this->mes = mes;
}

void Fecha::setAnio(int anio)
{
    this->anio = anio;
}

string Fecha::toStringFechaActual()
{
    stringstream r;

    //// current date and time on the current system
    //time_t now = time(0);

    //// convert now to string form
    //char* date_time = ctime(&now);

    //r << "La fecha y hora son: " << date_time << endl;

    return r.str();
}
