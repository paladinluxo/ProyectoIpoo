#ifndef TIQUETE_H
#define TIQUETE_H
#include <string>
#include "Aeropuerto.h"
using namespace std;
class Tiquete
{
    public:
        Tiquete(string NumeroTiquete,Aeropuerto Origen,Aeropuerto Destino,string aerolinea);
        Tiquete();
        virtual ~Tiquete();
    protected:
    private:
};

#endif // TIQUETE_H
