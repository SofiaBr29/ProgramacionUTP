#include <iostream>

using namespace std;
float Corriente (float resistencia, float intensidad);


int main ()
{
    float r, c;
    cout<<"Ingrese el valor de la resistencia"<<endl;
    cin>>r;
    cout<<"Ingrese el valor de la corriente"<<endl;
    cin>>c;
    cout<< "La tension es "<<Corriente(r,c)<<endl;
}

float Corriente (float resistencia, float intensidad)
{
    return resistencia*intensidad;
}
  