#include "Persona.h"

Persona::Persona(string nombreP, string apellidoP,string telefonoP, string direccionP, string fecha, string tipoid,string id)
{
    _nombreP=nombreP;
    _apellidoP=apellidoP;
    _telefonoP=telefonoP;
    _direccionP=direccionP;
    _fecha=fecha;
    _tipoid=tipoid;
    _id=id;
}


Persona::Persona()
{
    _nombreP="";
    _apellidoP="";
    _telefonoP="";
    _direccionP="";
    _fecha="";
    _tipoid="";
    _id="";


}

Persona::~Persona()
{
    //dtor
}

string Persona::GetnombreP()
{
    return _nombreP;
}

void Persona::SetnombreP(string nomP)
{
    _nombreP = nomP;
}

string Persona::GetapellidosP()
{
    return _apellidoP;
}

void Persona::SetapellidosP(string apeP)
{
    _apellidoP = apeP;
}

string Persona::Gettelefono()
{
    return _telefonoP;
}

void Persona::Settelefono(int telP)
{
    _telefonoP = telP;
}

string Persona::GetdireResidencia()
{
    return _direccionP;
}

void Persona::SetdireResidencia(string dirR)
{
    _direccionP = dirR;

}

string Persona::GetfechaNaci()
{
    return _fecha;
}

void Persona::SetfechaNaci(string fecha)
{
    _fecha= fecha;
}

string Persona::GettipoIdent()
{
    return _tipoid;
}

void Persona::SettipoIdent(string tipoI)
{
    _tipoid = tipoI;
}

string Persona::GetnroIdent()
{
    return _id;
}

void Persona::SetnroIdent(int nroI)
{
    _id = nroI;
}
