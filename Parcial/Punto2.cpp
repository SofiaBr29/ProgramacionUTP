#include <iostream>
using namespace std;

struct DatosEstudiante
{
    string nombre;
    int ident,semestre, edad;
};

int main()
{
    DatosEstudiante n;
    n.nombre = "Sofia Bravo Rojas";
    n.ident = 1004701640;
    n.edad = 19;
    n.semestre = 4;

    cout<<"Nombre del dEstudiante: "<<n.nombre<<endl;
    cout<<"No. de identificacion: \t"<<n.ident<<endl;
    cout<<"Edad del dEstudiante: \t"<<n.edad<<endl;
    cout<<"Semestres cursado: \t"<<n.semestre<<endl;
}