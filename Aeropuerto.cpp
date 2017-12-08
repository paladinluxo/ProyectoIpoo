#include "Aeropuerto.h"

Aeropuerto::Aeropuerto(string Nombre,string Abreviatura,int AvionesPermitidos,int CantPasajeros)
{
    _Nombre=Nombre;
    _Abreviatura=Abreviatura;
    _AvionesPermitidos=AvionesPermitidos;
    _CantPasajeros=CantPasajeros;
}
Aeropuerto::Aeropuerto()
{
     _Nombre="";
    _Abreviatura="";
    _AvionesPermitidos=0;
    _CantPasajeros=0;
}
Aeropuerto::~Aeropuerto()
{
    //dtor
}
string Aeropuerto::getNombre()
{
    return _Nombre;
}
string Aeropuerto::getAbreviatura()
{
    return _Abreviatura;
}
int Aeropuerto::getAvionesPermitidos()
{
    return _AvionesPermitidos;
}
int Aeropuerto::getCantPasajeros()
{
    return _CantPasajeros;
}
void Aeropuerto::setNombre(string val)
{
    _Nombre=val;
}
void Aeropuerto::setAbreviatura(string val)
{
    _Abreviatura=val;
}
void Aeropuerto::setAvionesPermitidos(int val)
{
    _AvionesPermitidos=val;
}
void Aeropuerto::setCantPasajeros(int val)
{
    _CantPasajeros=val;
}
