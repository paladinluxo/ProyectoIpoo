#ifndef AEROPUERTO_H
#define AEROPUERTO_H
#include "Aerolinea.h"
#include "Agencia_Viajes.h"
#include <string>
#include <vector>
using namespace std;
class Aeropuerto
{
    public:
        Aeropuerto(string Nombre,string Abreviatura,int AvionesPermitidos,int CantPasajeros);
        Aeropuerto();
        string getNombre();
        string getAbreviatura();
        int getAvionesPermitidos();
        int getCantPasajeros();
        void setNombre(string val);
        void setAbreviatura(string val);
        void setAvionesPermitidos(int val);
        void setCantPasajeros(int val);
        virtual ~Aeropuerto();
    protected:
    private:
        string _Nombre,_Abreviatura;
        int _AvionesPermitidos,_CantPasajeros;
        vector<Aerolinea>aerolineas_aeropuerto;
        vector<Aeropuerto>aeropuertos_conexion;
};

#endif // AEROPUERTO_H
