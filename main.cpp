#include <iostream>
#include <fstream>
#include "Agencia_Viajes.h"
#include "Aeropuerto.h"
#include "Aerolinea.h"
#include <string>
using namespace std;

int main()
{
    vector<Agencia_Viajes>agencias; //en este vector se ingresaran todas las agencias que se tengan en los archivos cada vez que se ejecute el programa
    vector<Aerolinea>aerolineas;
    int respuesta;
    menu:
    cout <<"*****SISTEMA DE CONTROL AEROPORTUARIO******"<<endl;
    cout<<"1-crear agencias"<<endl;
    cout<<"2-Crear Aerolinea"<<endl;
    cout<<"3-Crear aeropuerto"<<endl;
    cout<<"10-subir base de datos"<<endl;
    cin>>respuesta;

    switch(respuesta)
    {
        case 1:
        {
            string nit,razonsocial,direccion,paginaw;
            cout<<"Favor llenar los siguientes datos para crear una agencia"<<endl;
            cout<<"Nit:";
            cin>>nit;
            cout<<"Razon Social: ";
            cin.ignore();
            getline(cin,razonsocial);
            cout<<"Direccion: ";
            getline(cin,direccion);
            cout<<"Pagina web: ";
            getline(cin,paginaw);
            Agencia_Viajes agencia(nit,razonsocial,direccion,paginaw);
            string r;
            cout<<"Desea guardar la agencia en archivo? s/n"<<endl;
            cin>>r;
            if(r=="s" || r=="S")
            {
                agencia.GuardarArchivo(agencia);
            }
            else
            {
                cout<<"La agencia no se guardara en archivo"<<endl;
            }
            goto menu;
        }
        break;

        case 2:
        {
            cout<<"*****CREACION DE AEROLINEAS*****"<<endl;
            cout<<"Ingrese los siguientes datos"<<endl;
            string nit,razonsocial,direccion,paginaw,matricula;
            int cantaviones;
            cout<<"Nit:";
            cin>>nit;
            cout<<"Razon Social: ";
            cin.ignore();
            getline(cin,razonsocial);
            cout<<"Direccion: ";
            getline(cin,direccion);
            cout<<"Pagina web: ";
            getline(cin,paginaw);
            cout<<"Matricula aerea: ";
            getline(cin,matricula);
            cout<<"Cantidad de aviones: ";
            cin>>cantaviones;
            Aerolinea arolinea1(nit,razonsocial,direccion,paginaw,matricula,cantaviones);
        }
        break;

        case 3:
        {
            cout<<"*******CREACION DE AEROLINEAS********"<<endl;
            cout<<"Igrese los siguientes datos"<<endl;
            string Nombre,Abreviatura;
            int AvionesPermitidos,CantPasajeros;
            cout<<"Nombre aeropuerto: ";
            cin.ignore();
            getline(cin,Nombre);
            cout<<"Abreviatura ( use mayusculas ): ";
            getline(cin,Abreviatura);
            cout<<"Cantidad de aviones permitidos: ";
            cin>>AvionesPermitidos;
            cout<<"Cantidad de pasajeros: ";
            cin>>CantPasajeros;
            Aeropuerto aeropuerto1(Nombre,Abreviatura,AvionesPermitidos,CantPasajeros);

        }
        break;

        case 10:
        {
            ifstream archivo("agencias.dat",ios::in); //el archivo se abre para lectura
            if (!archivo)
            {
                cerr<<"error"<<endl;

            }
            else
            {
                string n,r,d,p;
                //int tel;

                while (archivo>>n>>r>>d>>p)
                {
                    Agencia_Viajes agencia(n,r,d,p);
                    agencias.push_back(agencia);
                    cout<<agencias[0].getRazonSocial();// es mommentaneo, la idea es tener algo por el estilo para extraer la informacion de los archivos y guardarle en memoria mediante vectores, hay un error aqui.... nada grave
                    //cout<<n<<" "<<r<<" "<<d<<" "<<p<<" "<<endl;

                }
            }
            archivo.close();


        }
        break;

    }



    return 0;
}
