#include "Avion.h"

Avion::Avion(int SillasVIP,int SillasNormales,int SillasBaratas,string Matricula,string Estado)
{
    _SillasVIP=SillasVIP;
    _SillasNormales=SillasNormales;
    _SillasBaratas=SillasBaratas;
    _Matricula=Matricula;
    _Estado=Estado;
}

Avion::Avion()
{
    _SillasVIP=0;
    _SillasNormales=0;
    _SillasBaratas=0;
    _Matricula="";
    _Estado="";
}

Avion::~Avion()
{
    //dtor
}
