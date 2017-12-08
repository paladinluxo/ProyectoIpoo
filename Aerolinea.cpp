#include "Aerolinea.h"

Aerolinea::Aerolinea(string Nit,string RazonSocial,string Direccion,string PaginaWeb,string MatriculaAerea,int CantAviones):Agencia_Viajes(Nit,RazonSocial,Direccion,PaginaWeb)
{
    _MatriculaAerea=MatriculaAerea;
    _CantAviones=CantAviones;
}

Aerolinea::Aerolinea()
{
    _MatriculaAerea="";
    _CantAviones=0;
}

Aerolinea::~Aerolinea()
{
    //dtor
}
string Aerolinea::getMatriculaAerea()
{
    return _MatriculaAerea;
}
int Aerolinea::getCantAviones()
{
    return _CantAviones;
}
void Aerolinea::setMatriculaAerea(string val)
{
    _MatriculaAerea=val;
}
void Aerolinea::setCantAviones(int val)
{
    _CantAviones=val;
}
