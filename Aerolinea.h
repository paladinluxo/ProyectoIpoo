#ifndef AEROLINEA_H
#define AEROLINEA_H
#include "Agencia_Viajes.h"
#include <iostream>

#include <vector>
using namespace std;
class Aerolinea:public Agencia_Viajes
{
    public:
        Aerolinea(string Nit,string RazonSocial,string Direccion,string PaginaWeb,string MatriculaAerea,int CantAviones);
        Aerolinea();
        string getMatriculaAerea();
        int getCantAviones();
        void setMatriculaAerea(string val);
        void setCantAviones(int val);
        virtual ~Aerolinea();
    protected:
    private:
        string _MatriculaAerea;
        int _CantAviones;
        vector<string>destinos;
        //vector<Aeropuerto>aeropuertos;
};

#endif // AEROLINEA_H
