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

string Fecha::toString() {
    stringstream r;
    r << dia << " / " << mes << " / " << anio << endl;
    return r.str();
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

int Fecha::getAnio()
{
    return anio;
}

int Fecha::getDia()
{
    return dia;
}

int Fecha::getMes()
{
    return mes;
}

string Fecha::FechaActual()
{
    stringstream r;
    time_t tiempoActual = time(0);

    tm tiempoLocal;
    localtime_s(&tiempoLocal, &tiempoActual);

    r << tiempoLocal.tm_mday << "/" << tiempoLocal.tm_mon + 1 << "/" << tiempoLocal.tm_year + 1900 << endl;
   
    return r.str();
}

int Fecha::edad() {

    time_t tiempo_actual;
    time(&tiempo_actual);
    tm tiempo_local;
    localtime_s(&tiempo_local, &tiempo_actual);

   
    int edad = tiempo_local.tm_year + 1900 - anio;
    if (mes > tiempo_local.tm_mon + 1 || (mes == tiempo_local.tm_mon + 1 && dia > tiempo_local.tm_mday)) {
        edad--;
    }
    return edad;
}

Fecha* Fecha::convertirFecha(string fecha_str) {
    int pos1 = fecha_str.find("/");
    int pos2 = fecha_str.find("/", static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(pos1) + 1);
    int dia = stoi(fecha_str.substr(0, pos1));
    int mes = stoi(fecha_str.substr(pos1 + 1, pos2 - pos1 - 1));
    int anio = stoi(fecha_str.substr(pos2 + 1));
    return new Fecha(dia, mes, anio);
}