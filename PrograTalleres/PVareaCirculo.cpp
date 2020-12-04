#include <iostream>

using namespace std;
float AreaCirculo(float Radio);


int main ()
{
  float rad;
  cout<<"Ingrese el valor del radio"<<endl;
  cin>>rad;

  cout<< "El area del circulo es "<<AreaCirculo(rad)<<endl;
}

float  AreaCirculo(float Radio)
{
  return (3.1416)*Radio*Radio;
}
   