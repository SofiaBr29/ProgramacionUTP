#include <iostream>
#include <math.h>

using namespace std;
void polares(float &x, float &y, float &r, float &a);

int main()
{
    float x, y, r, a;

    cout<<"Ingrese los valores de las coordenadas rectangulares (x,y) para transformarlos en coordenadas polares (r, angulo tetha)"<<endl;

    cout<<"Digite el valor de x"<<endl;
    cin>>x;

    cout<<"Digite el valor de y "<<endl;
    cin>>y;

    polares(x, y, r, a);
    
    cout<<"Coordenadas rectangulares: ("<<x<<", "<<y<<") "<<endl<<"Forma polar ("<<r<<", "<<a<<")"<<endl;
    cout<<"Valor en radianes."<<endl;
}

void polares(float &x, float &y, float &r, float &a)
{ 
    r=sqrt((x*x)+y*y);
    a=atan(y/x);
}