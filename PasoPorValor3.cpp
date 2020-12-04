#include <iostream>

using namespace std;
float AreaCirculo(float Radio);


int main ()
{
    float r;
    cout<<"Ingrese el valor del radio"<<endl;
    cin>>r;

    cout<< "El area del circulo es "<<AreaCirculo(r)<<endl;
}

float  AreaCirculo(float Radio)
{
  return (3.1416)*Radio*Radio;
}
   