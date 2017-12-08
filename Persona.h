#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
    public:
       Persona(string nombreP, string apellidoP,string telefonoP, string direccionP, string fecha, string tipoid,string id);
        Persona();
        virtual ~Persona();





        string GetnombreP();
        void SetnombreP(string nomP);
        string GetapellidosP();
        void SetapellidosP(string apeP);
        string Gettelefono();
        void Settelefono(int telP);
        string GetdireResidencia();
        void SetdireResidencia(string dirR);
        string GetfechaNaci();
        void SetfechaNaci(string fecha);
        string GettipoIdent();
        void SettipoIdent(string tipoI);
        string GetnroIdent();
        void SetnroIdent(int nroI);

    protected:
    private:
        string _nombreP,_apellidoP,_telefonoP,_direccionP,_fecha,_tipoid,_id;

};

#endif // PERSONA_H
