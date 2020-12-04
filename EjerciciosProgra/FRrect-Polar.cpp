#include <iostream>
#include <math.h>

using namespace std;
void polares(float &x, float &y, float &r, float &t);

int main()
{
    float x, y, r, t;

    cout<<"Ingrese los valores de X y Y para transformarlos en polares r, tetha"<<endl;
    cout<<"Valor de X \t";
    cin>>x;
    cout<<"Valor de Y \t";
    cin>>y;

    polares(x, y, r, t);
    cout<<"Las coordenadas rectangulares que ingreso: ("<<x<<", "<<y<<") "<<endl<<"tranformadas en forma polar: ("<<r<<", "<<t<<")"<<endl;
    cout<<"El resultado es arrojado en radianes."<<endl;
}

void polares(float &x, float &y, float &r, float &t)
{ 
    r=sqrt((x*x)+y*y);
    t=atan(y/x);
}