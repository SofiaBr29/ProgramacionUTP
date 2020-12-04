#include <iostream>

using namespace std;
float Corriente (float resistencia, float intensidad);


int main ()
{
    float resis, corri;
    cout<<"Ingrese el valor de la resistencia"<<endl;
    cin>>resis;
    cout<<"Ingrese el valor de la corriente"<<endl;
    cin>>corri;
    cout<< "La tension es "<<Corriente(resis,corri)<<endl;
}

float Corriente (float resistencia, float intensidad)
{
    return resistencia*intensidad;
}
  