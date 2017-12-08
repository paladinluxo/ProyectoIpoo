#ifndef AGENCIA_VIAJES_H
#define AGENCIA_VIAJES_H
#include <iostream>
#include <vector>
#include <string>
#include "Persona.h"
using namespace std;

class Agencia_Viajes
{
    public:
        Agencia_Viajes(string Nit,string RazonSocial,string Direccion,string PaginaWeb);
        Agencia_Viajes();
        string getNit();
        string getRazonSocial();
        string getDireccion();
        string getPaginaWeb();
        void setNit(string val);
        void setRazonSocial(string val);
        void setDireccion(string val);
        void setPaginaWeb(string val);
        void GuardarArchivo(Agencia_Viajes agencia);
        virtual ~Agencia_Viajes();
    protected:
    private:
        string _Nit,_RazonSocial,_Direccion,_PaginaWeb;
        vector<Persona>telefonos_agencia;
};

#endif // AGENCIA_VIAJES_H
