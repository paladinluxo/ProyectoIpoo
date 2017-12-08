#include "Agencia_Viajes.h"
#include <string>
#include <fstream>
using namespace std;
Agencia_Viajes::Agencia_Viajes(string Nit,string RazonSocial,string Direccion,string PaginaWeb)
{
    _Nit=Nit;
    _RazonSocial=RazonSocial;
    _Direccion=Direccion;
    _PaginaWeb=PaginaWeb;
}

Agencia_Viajes::Agencia_Viajes()
{
    _Nit="";
    _RazonSocial="";
    _Direccion="";
    _PaginaWeb="";
}

Agencia_Viajes::~Agencia_Viajes()
{
    //dtor
}

string Agencia_Viajes::getNit()
{
    return _Nit;
}
string Agencia_Viajes::getRazonSocial()
{
    return _RazonSocial;
}
string Agencia_Viajes::getDireccion()
{
    return _Direccion;
}
string Agencia_Viajes::getPaginaWeb()
{
    return _PaginaWeb;
}
void Agencia_Viajes::setNit(string val)
{
    _Nit=val;
}
void Agencia_Viajes::setRazonSocial(string val)
{
    _RazonSocial=val;
}
void Agencia_Viajes::setDireccion(string val)
{
    _Direccion=val;
}
void Agencia_Viajes::setPaginaWeb(string val)
{
    _PaginaWeb=val;
}

void Agencia_Viajes::GuardarArchivo(Agencia_Viajes agencia)
{
    string namearchivo="agencias.dat";
    ofstream archivo(namearchivo.c_str(),ios::app);
    if (!archivo)
    {
        cout<<"no se pudo abrir el archivo"<<endl;

    }

    else
    {
        archivo<<agencia.getNit()<<"    "<<agencia.getRazonSocial()<<"    "<<agencia.getDireccion()<<"    "<<agencia.getPaginaWeb()<<endl;

    }
    cout<<"LA AGENCIA SE A GUARDADO EN ARCHIVO EXITOSAMENTE"<<endl;
}
