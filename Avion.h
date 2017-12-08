#ifndef AVION_H
#define AVION_H
#include <string>
using namespace std;
class Avion
{
    public:
        Avion(int SillasVIP,int SillasNormales,int SillasBaratas,string Matricula,string Estado);
        Avion();
        virtual ~Avion();
    protected:
    private:
        int _SillasVIP,_SillasNormales,_SillasBaratas;
        string _Matricula,_Estado;
};

#endif // AVION_H
