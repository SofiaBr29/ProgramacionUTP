#include <iostream>
#include <math.h>

using namespace std;
void intercambio(float &peso, float &dolar, float &euro);

int main()
{
    float peso, dolar, euro;
    cout<<"Ingrese el valor en pesos colombianos (COP) para pasarlo a dolares (USD) y euros(EUR) \t";
    cin>>peso;
    intercambio(peso, dolar, euro);
    cout<<peso<<" pesos colombianos (COP)equivalen a: "<<dolar<<" dolares (USD)"<<endl;
    cout<<peso<<" pesos colombianos (COP) equivalen a: "<<euro<<" euros (EUR)"<<endl;

}

void intercambio(float &peso, float &dolar, float &euro)
{
    dolar=peso*0.00027;
    euro=peso*0.00023;
}